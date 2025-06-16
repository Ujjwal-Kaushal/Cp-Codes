#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int winCount = 0;
        int sa[2] = {a1, a2};
        int sb[2] = {b1, b2};
        
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                int sa1 = sa[i];
                int sa2 = sa[1 - i];
                int sb1 = sb[j];
                int sb2 = sb[1 - j];
                
                int sWins = 0;
                int bWins = 0;
                
                if (sa1 > sb1) sWins++;
                if (sa1 < sb1) bWins++;
                if (sa2 > sb2) sWins++;
                if (sa2 < sb2) bWins++;
                
                if (sWins > bWins) winCount++;
            }
        }
        cout << winCount << endl;
    }
    return 0;
}