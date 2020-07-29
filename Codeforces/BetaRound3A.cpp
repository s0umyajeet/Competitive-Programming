#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                string ini;
                string fin;
                cin >> ini >> fin;

                int dx = abs(ini[0] - fin[0]);
                int dy = abs(ini[1] - fin[1]);

                cout << max(dx, dy) << endl;
                if (ini[0] < fin[0] && ini[1] < fin[1]) {
                        for (int i = 0; i < min(dx, dy); i++) {
                                cout << "RU" << endl;
                        } 
                        if (dx <= dy) {
                                for (int i = 0; i < dy - dx; i++) {
                                        cout << "U" << endl;
                                }
                        } else {
                                for (int i = 0; i < dx - dy; i++) {
                                        cout << "R" << endl;
                                }
                        }
                } else if (ini[0] < fin[0] && ini[1] > fin[1]) {
                        for (int i = 0; i < min(dx, dy); i++) {
                                cout << "RD" << endl;
                        }
                        if (dx <= dy) {
                                for (int i = 0; i < dy - dx; i++) {
                                        cout << "D" << endl;
                                }
                        } else {
                                for (int i = 0; i < dx - dy; i++) {
                                        cout << "R" << endl;
                                }
                        }
                } else if (ini[0] > fin[0] && ini[1] > fin[1]) {
                        for (int i = 0; i < min(dx, dy); i++) {
                                cout << "LD" << endl;
                        }
                        if (dx <= dy) {
                                for (int i = 0; i < dy - dx; i++) {
                                        cout << "D" << endl;
                                }
                        } else {
                                for (int i = 0; i < dx - dy; i++) {
                                        cout << "L" << endl;
                                }
                        }
                } else if (ini[0] > fin[0] && ini[1] < fin[1]) {
                        for (int i = 0; i < min(dx, dy); i++) {
                                cout << "LU" << endl;
                        }
                        if (dx < dy) {
                                for (int i = 0; i < dy - dx; i++) {
                                        cout << "U" << endl;
                                }
                        } else {
                                for (int i = 0; i < dx - dy; i++) {
                                        cout << "L" << endl;
                                }
                        }
                } else if (ini[0] == fin[0] && ini[1] > fin[1]) {
                        for (int i = 0; i < dy; i++) {
                                cout << "D" << endl;
                        }
                } else if (ini[0] == fin[0] && ini[1] < fin[1]) {
                        for (int i = 0; i < dy; i++) {
                                cout << "U" << endl;
                        }
                } else if (ini[0] > fin[0] && ini[1] == fin[1]) {
                        for (int i = 0; i < dx; i++) {
                                cout << "L" << endl;
                        }
                } else {
                        for (int i = 0; i < dx; i++) {
                                cout << "R" << endl;
                        }
                }
        }
	return 0;
}