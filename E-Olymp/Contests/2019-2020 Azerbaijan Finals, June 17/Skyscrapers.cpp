#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, d;
map<int, int> m;

bool checkOK(int x) {
        cout << "For building at x: " << x << endl;
        int flag1 = 0;
        int flag2 = 0;
        for (int i = x - d; i < x; i++) {
                auto itr = m.find(i);
                if (itr != m.end() && itr->second > m[x] * 2) {
                        cout << "Building at x: " << itr->first << " fails" << endl;
                        cout << endl;
                        flag1 = 1;
                        break;
                }
        }
        for (int i = x + 1; i <= x + d; i++) {
                auto itr = m.find(i);
                if (itr != m.end() && itr->second > m[x] * 2) {
                        cout << "Building at x: " << itr->first << " fails" << endl;
                        cout << endl;
                        flag2 = 1;
                        break;
                }
        }

        return (flag1 + flag2);
}

int32_t main() {
        cin >> n >> d;
        
        for (int i = 0; i < n; i++) {
                int loc, h;
                cin >> loc >> h;
                m[loc] = h;
        }

        int count = 0;
        for (auto itr = m.begin(); itr != m.end(); itr++) {
                if (checkOK(itr->first) == 2) count++;
        }
        cout << count << endl;
}