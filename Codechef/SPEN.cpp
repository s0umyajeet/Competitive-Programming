#include <bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t;
        cin >> t;

        while(t--) {
                long long n;
                cin >> n;
                n /= 2;  
                
                if (n & 1) cout << (n / 2) * (n / 2 + 1) << endl;
                else cout << (n * n) / 4 << endl;        
        }
}