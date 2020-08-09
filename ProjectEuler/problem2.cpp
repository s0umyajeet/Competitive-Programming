#include <bits/stdc++.h>
using namespace std;

void calculate() {
        int a = 1, b = 2, temp = 0;
        long long sum = 0;

        while (1) {
                temp = a;
                a = b;
                b = temp + b;
                if (b >= 4000000) break;
                if (!(b % 2)) sum += b;
        }
        cout << sum + 2 << endl;
}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);

        auto start = chrono::high_resolution_clock::now();
                calculate();
        auto end = chrono::high_resolution_clock::now();

        double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
        time_taken *= (double)1e-9;
        cout << "running time: " << time_taken << setprecision(10) << " sec" << endl;
        return 0;

}

//0.000996 sec