#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int a, b, c;
                cin >> a >> b >> c;

                int stones = 0;
                if (b >= c) {
                        if (c % 2 == 0) stones += c;
                        else stones += c - 1;
                        stones += c / 2;
                        b -= c / 2;
                } else {
                
                }
                if (b >= 2) {
                        if (a >= b) {
                                if (b % 2 == 0) stones += b;
                                else stones += b - 1;
                                stones += b / 2;
                                a -= b / 2;
                        } else {
                                stones += a * 2;
                                stones += a;
                                a = 0;
                        }
                }
                cout << stones << endl;
	}
	return 0;
}