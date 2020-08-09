#include <bits/stdc++.h>
using namespace std;

void calculate() {

        long long sumOfSquares = 0;
        long long squareOfSum = 0;

        for (int i = 1; i <= 100; i++) {
                sumOfSquares += (i * i);
                squareOfSum += i;
        }
        cout << squareOfSum * squareOfSum - sumOfSquares << endl;
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