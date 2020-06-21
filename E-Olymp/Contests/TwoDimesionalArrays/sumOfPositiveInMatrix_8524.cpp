#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        int input;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> input;
                        if (input > 0) ans += input;
                }
        }
        cout << ans << endl;
        return 0; 
}