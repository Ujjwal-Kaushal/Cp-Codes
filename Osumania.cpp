    #include<bits/stdc++.h>
    using namespace std;

    void solve()
    {
        int n;
        cin >> n;
        char a[n][4];
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<4; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<int> v;
        for(int j = n-1; j>=0; j--)
        {
            for(int i = 0; i<4; i++)
            {
                if(a[j][i] == '#')
                {
                    v.push_back(i+1);
                }
            }
        }
        for(int i = 0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    int main()
    {
        int t;
        cin >> t;
        while(t--)
        {
            solve();
        }
    }