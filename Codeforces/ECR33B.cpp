#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int binary_to_decimal(string s) {
        int num = 0;
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++) {
                if (s[i] == '1') {
                        num += pow(2, i);
                }
        }
        return num;
}

string string_generator(int n) {
        string ans;
        for (int i = 0; i < n + 1; i++) {
                ans += '1';
        }
        for (int i = 0; i < n; i++) {
                ans += '0';
        }
        return ans;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n;
                cin >> n;
                int biggest_factor = -999;
                int possible_factor = binary_to_decimal(string_generator(0));    
                int k = 0;            
                while (possible_factor <= n) {
                        if (n % possible_factor == 0) {
                                biggest_factor = max(biggest_factor, possible_factor);
                        }
                        k++;
                        possible_factor = binary_to_decimal(string_generator(k));
                }
                cout << biggest_factor << endl;
        }
	return 0;
}