#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    std::string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    while (t--) {
        std::string n;
        std::cin >> n;
        n += '#';

        for (int i = 0; i < n.length(); ++i) {
            if (pi[i] != n[i]) {
                std::cout << i << std::endl;
                break;
            }
        }
    }

    return 0;
}
