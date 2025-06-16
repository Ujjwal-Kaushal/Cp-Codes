#include <iostream>
#include <set>
#include <vector>
using namespace std;

int getTime(string conversation, char infectedCategory) {
    int n = conversation.size();
    set<int> infectedIndices;
    
    // Step 1: Find all infected positions
    for (int i = 0; i < n; i++) {
        if (conversation[i] == infectedCategory) {
            infectedIndices.insert(i);
        }
    }
    
    int time = 0;
    while (!infectedIndices.empty()) {
        vector<int> toRemove;
        
        // Step 2: Identify left neighbors of infected characters
        for (int idx : infectedIndices) {
            if (idx > 0) {
                toRemove.push_back(idx - 1);
            }
        }
        
        if (toRemove.empty()) break;
        
        // Step 3: Remove duplicates and update infected set
        infectedIndices.clear();
        for (int pos : toRemove) {
            if (conversation[pos] != infectedCategory) {
                infectedIndices.insert(pos);
            }
        }
        
        time++;
    }

    return time;
}

int main() {
    string conversation;
    char infectedCategory;
    int n;
    cin >> n >> conversation >> infectedCategory;
    
    cout << getTime(conversation, infectedCategory) << endl;
    return 0;
}
