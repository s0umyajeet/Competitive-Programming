#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int t = 1;
        // cin >> t;

        while (t--)
        {
                int n, m;
                cin >> n >> m;
                vector<int> bulbs(m + 1);
                while (n--)
                {
                        int k;
                        cin >> k;
                        int input;
                        for (int i = 0; i < k; i++)
                        {
                                cin >> input;
                                bulbs[input] = 1;
                        }
                }
                for (int i = 1; i <= m; i++)
                {
                        if (bulbs[i] == 0)
                        {
                                cout << "NO" << endl;
                                return 0;
                        }
                }
                cout << "YES" << endl;
        }
        return 0;
}