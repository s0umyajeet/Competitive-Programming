//for n = 10
//Using vector to maintain flags of factor
//when the number is evenly divisible by the factor, v[factor] is set to 1;
//we find the number when v[factor] = 1 for all factors belonging to the set {1, 2, .. ,10}

#include <bits/stdc++.h>
using namespace std;

void calculate() {
        int n = 9;
        vector<int> v(11);
                
        while (1) {
                n++;
                /* 
                With redefining vector with each iteration, 
                running time = 0.003996 sec
                */
                vector<int> v(11);
                v[0] = 1, v[1] = 1;

                if (!(n % 10)) {
                        v[2] = 1;
                        v[5] = 1;
                        v[10] = 1;
                } else continue;

                if (!(n % 9)) {
                        v[3] = 1;
                        v[9] = 1;
                } else continue;

                if (!(n % 8)) {
                        v[4] = 1;
                        v[8] = 1;
                } else continue;

                if (v[3] && v[2]) v[6] = 1;
                else continue;
                if (!(n % 7)) v[7] = 1;
                else continue;

                cout << n << endl;
                break;

                // cout << "for n = " << n << " ";
                // for (int i = 0; i < v.size(); i++) {
                //         cout << v[i] << ends;
                // }

                // cout << endl;
                // if (find(v.begin(), v.end(), 0) == v.end()) {
                //         cout << n << endl;
                //         break;
                // }
                // else n++;
        }

}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);

        auto start = chrono::high_resolution_clock::now();
                calculate();
        auto end = chrono::high_resolution_clock::now();

        double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
        time_taken *= 1e-9;
        cout << "running time: " << fixed << time_taken << setprecision(20) << " secs" << endl;
        return 0;

}