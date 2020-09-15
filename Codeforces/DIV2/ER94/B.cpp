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
                int p, f;
                cin >> p >> f;
                int cs, cw;
                cin >> cs >> cw;
                int ws, ww;
                cin >> ws >> ww;
                int total = p + f;
                int ans;
                if (total >= cs * ws + cw * ww) {
                        cout << cs + cw << endl;
                } else {
                        if (ws >= ww) {
                                if (p >= f) {

                        

	}
	return 0;
}