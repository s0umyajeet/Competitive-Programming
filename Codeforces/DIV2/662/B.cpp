#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void printMap(map<int, int> m)
{
        cout << endl;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
                cout << itr->first << " " << itr->second << endl;
        }
        cout << endl;
}

void test(map<int, int> m)
{
        bool square = false;
        bool rectangle = false;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
                if (itr->second >= 4)
                {
                        if (square) rectangle = true;
                        square = true;
                        itr->second -= 4;       
                }
        }

        if (rectangle && square) {
                cout << "YES" << endl;
                return;
        }
        // printMap(m);
        int count = 0;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
                if (itr->second >= 2)
                {
                        count++;
                }
        }
        if (count >= 2)
                rectangle = true;
        if (square && rectangle)
                cout << "YES" << endl;
        else
                cout << "NO" << endl;
}


int32_t main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int t = 1;
        // cin >> t;

        while (t--)
        {
                int n;
                cin >> n;
                vector<int> planks(n);
                map<int, int> m;
                for (auto &x : planks)
                {
                        cin >> x;
                        m[x]++;
                }

                int k;
                cin >> k;
                while (k--)
                {
                        // map<int, int> prev = m;
                        char c;
                        int p;
                        cin >> c >> p;
                        if (c == '+')
                        {
                                m[p]++;
                        }
                        if (c == '-')
                        {
                                m[p]--;
                        }

                        // printMap(m);
                        test(m);
                        
                }
        }
        return 0;
}