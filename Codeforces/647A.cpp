#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int calculate(int a, int b) {
        if (b < a) return -1;
        if (a == b) {
                return 0;
        } else {
                if (b > a && b % 8 == 0)
                        return 1 + calculate(a, b / 8);
                else if (b > a &&  b % 4 == 0)
                        return 1 + calculate(a, b / 4);
                else if (b > a && b % 2 == 0)
                        return 1 + calculate(a, b / 2);
                else return -1;
        }
}
                
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int a, b;
                cin >> a >> b;
                cout << calculate(min(a, b), max(a, b)) << endl;
	}
	return 0;
}