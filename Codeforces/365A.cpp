#include <bits/stdc++.h>
#define int long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;
    int mishka = 0, chishka = 0;
	while (t--) {
		int a, b;
        cin >> a >> b;
        if (a > b) mishka++;
        else chishka++;
	}
    if (mishka > chishka) cout << "Mishka" << endl;
    else if (mishka == chishka) cout << "Friendship is magic!^^" << endl;
    else cout << "Chris" << endl;
	return 0;
}