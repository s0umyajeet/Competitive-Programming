#include <bits/stdc++.h>
using namespace std;

struct file {
        bool tracked = false;
        bool ignored = false;
};

int main() {
        int t; cin >> t;
        while (t--) {
                int n, m, k;
                cin >> n >> m >> k;

                int input;
                vector<file> v(n + 1);

                for (int i = 0; i < m; i++) {
                        cin >> input;
                        v[input].ignored = true;
                }

                for (int i = 0; i < k; i++) {
                        cin >> input;
                        v[input].tracked = true;
                }


                int a = 0; //tracked and ignored
                int b = 0; //untracked and unignored;


                for (int i = 1; i <= n; i++) {
                        if (v[i].tracked == true && v[i].ignored == true) a++;
                        if (v[i].tracked == false && v[i].ignored == false) b++;
                }
                cout << a << " " << b << endl;              
        }
        return 0;
}