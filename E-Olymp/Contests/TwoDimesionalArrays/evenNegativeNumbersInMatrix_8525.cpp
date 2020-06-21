#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        int input;
        long long ans = 0, count = 0;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> input;
                        if (input < 0) {
                                if (abs(input) % 2 == 0) {
                                        ans += input;
                                        count++;
                                }
                        }
                }
        }
        cout << count << " " << ans << endl;
        return 0; 
}