#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int countOnes(string s) {
        int c_1 = 0;        
        int c_2
        for (int i = 0; i < s.size(); i++) {
                
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                int n, k;
                cin >> n >> k;
                string s;
                cin >> s;
                int c = count(s.begin(), s.end(), '?');
                if (c == 0) {
                        for (int i = 0; i < n - k; i++) {
                                string sample = s.substr(i, k);
                                countOnes(sample);

	}
	return 0;
}