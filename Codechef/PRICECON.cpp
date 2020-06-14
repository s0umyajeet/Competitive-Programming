#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        
        while (t--) {
                int n, k;
                cin >> n >> k;
                
                int input, loss = 0;
                for (int i = 0; i < n; i++) {
                        cin >> input;
                        if (input > k) loss += (input - k);
                }
                cout << loss << endl;
        }
        return 0;
}