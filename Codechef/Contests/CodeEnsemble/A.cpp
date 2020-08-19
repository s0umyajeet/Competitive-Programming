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
                int n;
                cin >> n;
                vector<int> A(n);
                for (auto &x : A) cin >> x;
                int count = 0;
                for (int i = 0; i < n - 1; i++) {
                        for (int j = i + 1; j < n; j++) {
                                if (A[i] == (A[i] & A[j])) count++;
                        }
                }
                cout << count << endl;
        }
	return 0;
}