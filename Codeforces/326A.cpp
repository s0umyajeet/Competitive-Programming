#include <bits/stdc++.h>
#define int long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

struct meat
{
    int f;
    int s;
    bool bought;
};

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // int t;
    // cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<meat> v(n, {0, 0, false});
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].f >> v[i].s;
        }
        int money = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i].bought == false)
            {
                money += v[i].s * v[i].f;
                for (int j = i + 1; j < n; j++)
                {
                    if (v[j].s >= v[i].s)
                    {
                        money += v[i].s * v[j].f;
                        v[j].bought = true;
                    }
                    else
                        break;
                }
            }
        }
        cout << money << endl;
    }
    return 0;
}