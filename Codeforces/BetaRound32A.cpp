
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
                int n, d;
                cin >> n >> d;
                vector<int> v(n);
                for (auto &x : v)
                        cin >> x;
                int count = 0;
                for (int i = 0; i < n; i++)
                {
                        for (int j = i + 1; j < n; j++)
                        {
                                if (abs(v[i] - v[j]) <= d)
                                        count++;
                        }
                }
                cout << count * 2 << endl;
        }
        return 0;
}