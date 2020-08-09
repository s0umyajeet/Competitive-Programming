//for numbers in the range [1, 10]
#include <bits/stdc++.h>
using namespace std;

void calculate() {
        int n = 9;                
        while (1) {
                n++;
                if (n % 10) continue;    //checks divisibility for 2, 5, 10
                if (n % 9) continue;     //checks divisibility for 3, 9 
                if (n % 8) continue;     //checks divisibility for 4, 8
                if (n % 7) continue;     //checks divisibility for 7, 8
                                         //no divisibility check required for 6 as it is self satisfied if number is divisible by 2 & 3
                cout << n << endl;
                break;
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
        cout << "running time: " << fixed << time_taken << setprecision(20) << " sec" << endl;
        return 0;

}