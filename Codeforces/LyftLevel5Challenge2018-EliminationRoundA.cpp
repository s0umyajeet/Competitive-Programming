#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

struct pos {
        int x;
        int y;
};

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n;
                cin >> n;
                pos queen;
                cin >> queen.x >> queen.y;
                pos king;
                cin >> king.x >> king.y;
                pos target;
                cin >> target.x >> target.y;

                int max_x = max(target.x, king.x);
                int min_x = min(target.x, king.x);
                int max_y = max(target.y, king.y);
                int min_y = min(target.y, king.y);

                if (max_x > queen.x && queen.x > min_x) {
                        cout << "NO" << endl;
                        return 0;
                } else if (max_y > queen.y && queen.y > min_y) {
                        cout << "NO" << endl;
                        return 0;
                } 
                cout << "YES" << endl;
	}
	return 0;
}