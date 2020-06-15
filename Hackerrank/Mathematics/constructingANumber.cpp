#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                int sum = 0;
                int input; 
                for (int i = 0; i < n; i++) {
                        cin >> input;
                        while (input) {
                                sum += input % 10;
                                input /= 10;
                        }
                }
                if (sum % 3 == 0) cout << "Yes" << endl;
                else cout << "No" << endl;
        }
        return 0;
}