#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    // Destructor (optional, for proper cleanup if not doing manual deletion)
    // ~TreeNode() {
    //     std::cout << "Deleting node: " << val << std::endl;
    // }
};

TreeNode* bstToLeftSkewedLinkedList(TreeNode* root) {
    TreeNode* head = nullptr; // Head of the new left-skewed linked list
    TreeNode* prev = nullptr; // Previously processed node in in-order traversal
    TreeNode* current = root;

    while (current != nullptr) {
        if (current->left == nullptr) {
            // No left child, so this is the next node in in-order traversal
            if (head == nullptr) {
                head = current; // Set the head of the list
            }
            if (prev != nullptr) {
                prev->left = current; // Link previous node's left to current
                prev->right = nullptr; // Ensure right child is null
            }
            // Ensure the current node's right is also null after it's processed
            // This is important for the final node in the list too.
            current->right = nullptr; 
            
            prev = current; // Update prev to current
            current = current->right; // Move to the right child (which is now null, so will exit or continue from next link if it existed previously)
        } else {
            // Find the inorder predecessor
            TreeNode* predecessor = current->left;
            while (predecessor->right != nullptr && predecessor->right != current) {
                predecessor = predecessor->right;
            }

            if (predecessor->right == nullptr) {
                // Link predecessor to current (temporary link for traversal)
                predecessor->right = current;
                current = current->left; // Move to the left subtree
            } else {
                // Left subtree has been visited, remove the temporary link
                predecessor->right = nullptr;

                // Now current is the next node in in-order traversal
                if (head == nullptr) {
                    head = current;
                }
                if (prev != nullptr) {
                    prev->left = current;
                    prev->right = nullptr;
                }
                // Ensure the current node's right is also null after it's processed
                current->right = nullptr; 

                prev = current; // Update prev to current
                current = current->right; // Move to the right child (which is now null)
            }
        }
    }
    
    // One final check: the last node processed by 'prev' will have its 'right'
    // already set to nullptr by the logic inside the loop (current->right = nullptr).
    // The 'left' pointer points to the next element or is nullptr for the very last element.

    return head;
}

// Helper function to print the left-skewed linked list
void printLeftSkewedList(TreeNode* head) {
    TreeNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " -> ";
        if (current->right != nullptr) {
            std::cout << "ERROR: Right child is not null for " << current->val << std::endl;
        }
        current = current->left;
    }
    std::cout << "nullptr" << std::endl;
}

// Example Usage:
int main() {
    // Construct a sample BST
    //        4
    //       / \
    //      2   5
    //     / \   \
    //    1   3   6
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(6);

    std::cout << "Original BST (conceptual): " << std::endl;
    // Visually represent the BST
    //           4
    //         /   \
    //        2     5
    //       / \     \
    //      1   3     6
    std::cout << "            4" << std::endl;
    std::cout << "          /   \\" << std::endl;
    std::cout << "         2     5" << std::endl;
    std::cout << "        / \\     \\" << std::endl;
    std::cout << "       1   3     6" << std::endl;


    TreeNode* leftSkewedListHead = bstToLeftSkewedLinkedList(root);

    std::cout << "\nLeft-skewed linked list (in-order traversal):" << std::endl;
    printLeftSkewedList(leftSkewedListHead);
    // Expected output: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> nullptr

    // IMPORTANT: In this problem, we are re-linking existing nodes.
    // The memory management strategy for the original BST nodes after conversion
    // depends on the broader application context. For a simple demonstration
    // or competitive programming, explicit deletion of individual nodes
    // created in `main` is generally not performed if their structure is
    // being reused and modified in-place by the algorithm.
    // If you need to clean up the nodes allocated in main, you would need
    // to trace the original tree before modification or have a separate
    // mechanism to manage their lifetime.
    // I am removing the problematic cleanup code.
    // For manual cleanup for this specific main function if needed (not part of the solution algorithm):
    // You'd have to store all created nodes in a vector and then delete them.
    // Example:
    /*
    std::vector<TreeNode*> allNodes;
    allNodes.push_back(root);
    allNodes.push_back(root->left);
    allNodes.push_back(root->right);
    allNodes.push_back(root->left->left);
    allNodes.push_back(root->left->right);
    allNodes.push_back(root->right->right);

    for(TreeNode* node : allNodes) {
        delete node;
    }
    */

    return 0;
}