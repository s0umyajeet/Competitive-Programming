#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int calculate(int a, int b) {
        if (a == b) return 0;
        int count = 0;
        while (b % 8 == 0) {
                cout << b << " " << a << endl;
                if (a == b) return count;
                count++;
                b /= 8;
        }
        
        while (b % 4 == 0) {
                cout << b << " " << a << endl;
                if (a == b) return count;
                count++;
                b /= 4;
        }
        while (b % 2 == 0) {
                cout << b << " " << a << endl;
                if (a == b) return count;
                count++;
                b /= 2;
        }
        cout << b << " " << a << endl;
        if (a == b) return count;
        else return -1;
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