#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int rev(string hr) {
        reverse(hr.begin(), hr.end());
        return stoi(hr);
};

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int hrr; 
                char col;
                int minn;
                cin >> hrr >> col >> minn;
                
                string hr = to_string(hrr);
                string min = to_string(minn);
                
                if (stoi(hr) <= 5 or (stoi(hr) >= 10 && stoi(hr) <= 15) or stoi(hr) >= 20) {
                        if (rev(hr) <= stoi(min)) {
                                if (stoi(hr) + 1 != 24) {
                                        if (stoi(hr) < 10) {
                                                cout << 0 << stoi(hr) + 1 << ":" << rev(to_string(stoi(hr) + 1)) << 0;
                                        } else cout << stoi(hr) + 1 << ":" << rev(to_string(stoi(hr) + 1)); 
                                }
                                else cout << "00:00" << endl;
                        } else {
                                if (stoi(hr) + 1 != 24) {
                                        if (stoi(hr) < 10) {
                                                cout << 0 << stoi(hr) << ":" << rev(hr) << 0;
                                        } else if (stoi(hr) == 10) {
                                                cout << stoi(hr) << ":" << 0 << rev(hr);  //only for 10:00
                                        } else {
                                                cout << stoi(hr) << ":" << rev(hr) << endl; 
                                        }
                                } else cout << "00:00" << endl;
                        }
                } else if (stoi(hr) >= 6 && stoi(hr) < 10) {
                        cout << "10:01" << endl;
                } else if (stoi(hr) > 15 && stoi(hr) < 20) {
                        cout << "20:02" << endl;
                } 
	}
	return 0;
}