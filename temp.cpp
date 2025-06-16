#include <iostream>
#include <vector>
#include <limits>

int main() {
    std::vector<int> vec;
    std::cout << "Maximum size of vector: " << vec.max_size()/1e9 << std::endl;
    return 0;
}