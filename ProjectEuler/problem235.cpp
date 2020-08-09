#include <bits/stdc++.h>
using namespace std;

void calculate() {
        int r = 1;
        while (1) {
                long long sum = 0;
                sum = ((903 + 14094 * pow(r, 5000)) / (1 - r)) + ((-3 * r * (1 - pow(r, 4999))) / ((1 - r) * (1 - r)));
                cout << sum << endl;
                if (sum == -600000000000) cout << r << endl;
                r++;
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