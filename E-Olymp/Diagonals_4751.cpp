#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        int input;
        long long diag1 = 0, diag2 = 0;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> input;
                        if (i == j) diag1 += input;                                
                        if (i + j == n - 1) diag2 += input;
                }
        }
        cout << diag1 << " " << diag2 << endl;
        return 0; 
}