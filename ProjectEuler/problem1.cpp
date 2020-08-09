#include <bits/stdc++.h>
using namespace std;

void calculate() {
        int sum = 0;
        for (int i = 3; i < 1000; i++) {       
                if (i % 3 == 0 || i % 5 == 0) sum += i;
        }
        cout << sum << endl;
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

//0.000000 sec

