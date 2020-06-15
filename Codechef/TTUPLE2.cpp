#include <bits/stdc++.h>
using namespace std;

int main() {
        long long t;
        cin >> t;
        while (t--) {
                vector<long long> initial(3);
                vector<long long> finall(3);

                long long a = 3, b = 0;
                for (auto &x : initial) cin >> x;
                for (auto &x : finall) cin >> x;

                set<long long> add;    
  
                for (long long i = 0; i < 3; i++) {
                        add.insert(finall[i] - initial[i]);
                }

                a = add.size();
                if (add.find(0) != add.end()) a--;        

                set<long long> Factor;
                
                //7 10  10 / 5 = 1      8 * 1 = 8  8 8 
                for (long long i = 0; i < 3; i++) {
                        if ((initial[i] != 0) && (finall[i] % initial[i] == 0)) {
                                Factor.insert(finall[i] / initial[i]);
                        } else if (initial[i] == 0) {
                                if (finall[i] == 0);
                                else b++;
                        } else b++;                         
                }

                if (Factor.find(1) != Factor.end()) b--;
                long long opt1 = a;
                long long opt2 = Factor.size() + b;
                cout << min(opt1, opt2) << endl;
        }
}