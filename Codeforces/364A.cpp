#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int findPair(int x, int target, vector<int> &set)
{
    for (int i = 0; i < set.size(); i++)
    {
        if (set[i] + x == target)
        {
            int found = set[i];
            set.erase(set.begin() + i);
            return found;
        }
    }
    return -1;
}

void printPos(int target, int pair, vector<int> &v, vector<int> &vis)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == target && vis[i] == -1)
        {
            vis[i] = 1;
            cout << i + 1 << " ";
        }
        if (v[i] == pair && vis[i] == -1)
        {
            vis[i] = 1;
            cout << i + 1 << " ";
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    //cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (auto &x : v)
        {
            cin >> x;
            sum += x;
        }

        int target = (sum * 2) / n;
        vector<int> set;
        vector<int> vis(n, -1);
        for (int i = 0; i < n; i++)
        {
            if (!set.empty())
            {
                int pair = findPair(v[i], target, set);
                if (pair != -1)
                {
                    printPos(v[i], pair, v, vis);
                    cout << endl;
                }
                else
                    set.push_back(v[i]);
            }
            else
                set.push_back(v[i]);
        }
    }
    return 0;
}