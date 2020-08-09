#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {
        if (n == 2) return true;
        for (int i = 2; i * i <= n; i++) {
                if (!(n % i)) return false;
        }
        return true;
}

void calculate() {

        int primeCount = 0, ans = 0;
        int test = 2;

        while (primeCount != 10001) {
                if (checkPrime(test)) {
                        primeCount++;
                        ans = test;
                }
                test++;
        }
        cout << ans << endl;        
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

//0.014960