#include <bits/stdc++.h>
using namespace std;

void calculate() {
       long long maxPrime = -1;
       long long n = 600851475143;
       while (n % 2 == 0) {
               maxPrime = 2;
               n >>= 2;
       }

       for (int i = 3; i < sqrt(n); i += 2) {
               while (n % i == 0) {
                       maxPrime = i;
                       n /= i;
               }
       }

       if (n > 2) maxPrime = n;
       cout << maxPrime << endl;
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

//0.000994 sec