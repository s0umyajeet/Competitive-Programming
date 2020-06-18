#include <bits/stdc++.h>
using namespace std;

int main() {
        while (1) {
                int n;
                cin >> n;
                
                if (n == 0) return 0;
                
                vector<int> permutation(n + 1);
                vector<int> pos(n + 1);
                
                for (int i = 1; i <= n; i++) {
                        cin >> permutation[i];
                        pos[permutation[i]] = i;
                }

                bool flag = true;
                for (int i = 1; i <= n; i++) {
                        if (pos[i] != permutation[i]) {
                                cout << "not ambiguous" << endl;
                                flag = false;
                                break;
                        }
                }
                if (flag) cout << "ambiguous" << endl;
        }
}