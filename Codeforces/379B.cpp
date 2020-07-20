#include <bits/stdc++.h>
#define int long long
#define coutans << "ans: "
using namespace std;

int32_t main() {
        int t = 1;
        //cin >> t;

        while(t--) {
                int _2, _3, _5, _6;
                cin >> _2 >> _3 >> _5 >> _6;

                int minn = min({_2, _5, _6});
                int sum = 0;
                sum += 256 * minn;

                _2 -= minn;
                _5 -= minn;
                _6 -= minn;

                int minn2 = min(_2, _3);
                        
                sum += 32 * minn2;
                cout << sum << endl;
        }
}