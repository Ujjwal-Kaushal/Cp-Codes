// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <climits>
using namespace std;

int binaryStringXor(const string &a, const string &b)
{
    if (a.empty() || b.empty())
        return 0;
    try
    {
        return stoi(a)^stoi(b);
    }
    catch (...)
    {
        return 0;
    }
}

void solve()
{
    string s;
    cin >> s;

    int n = s.length();

    int i = 1;
    while (i < n)
    {
        if (s[i] == '0')
            break;
        i++;
    }

    int len = n - i;

    if (len <= 0)
    {
        s[n - 1] = '0';
        cout << 1 << " " << n << " " << n << " " << n << endl;
        return;
    }

    int maxXor = 0;
    int startIndex = 0;
    int endIndex = 0;

    for (int i = 0; i <= n - len; i++)
    {
        string t = s.substr(i, len);

        int currentXor = binaryStringXor(s, t);

        if (currentXor > maxXor)
        {
            maxXor = currentXor;
            startIndex = i + 1;
            endIndex = i + len;
        }
    }

    cout << 1 << " " << n << " " << startIndex << " " << endIndex << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}