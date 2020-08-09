#include <bits/stdc++.h>
using namespace std;


int countFactors(int n) {
        int factorCount = 0;
        for (int i = 1; i * i <= n; i++) {
                if (n % i == 0) factorCount += 2;
                if (i * i == n) factorCount--;
        }
        return factorCount;
}

void calculate(int n) {

        int i = 1, triangular = 0;
        while(1) {
                triangular = (i * (i + 1)) / 2;
                if (countFactors(triangular) > n) {
                        cout << triangular << endl;
                        return;
                }
                i++;
        }
       
}
//76576500
int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);

        auto start = chrono::high_resolution_clock::now();
                calculate(1000);
        auto end = chrono::high_resolution_clock::now();

        double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
        time_taken *= 1e-9;
        cout << "running time: " << fixed << time_taken << setprecision(20) << " sec" << endl;
        return 0;

}