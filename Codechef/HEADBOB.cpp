#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                char input;

                int yes = 0, no = 0, indian = 0;
                for (int i = 0; i < n; i++) {
                        cin >> input;
                        if (input == 'N') no++;
                        if (input == 'Y') yes++;
                        if (input == 'I') indian++;
                }

                if (yes > 0 && indian == 0) cout << "NOT INDIAN" << endl;
                else if (n > 0 && yes == 0 && indian == 0) cout << "NOT SURE" << endl;
                else cout << "INDIAN" << endl;
        }
        return 0;
} 