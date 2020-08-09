//best implementation
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
        if (b == 0)
        return a;
        else return gcd(b, a % b);       
}

void calculate() {
       long long x = 1;
       for (int i = 2; i <= 500; i++) x = (x * i) / gcd(x, i);
       cout << x << endl;
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

/*
//Naive Implementation
#include <bits/stdc++.h>
using namespace std;

void calculate(int n) {
        vector<int> factors(n + 1);
        iota(factors.begin(), factors.end(), 0);

        unsigned long long x = 20;
        int flag = 0;

        while (1) {
                label:
                x++;
                for (int i = 2; i < factors.size(); i++) {
                        if (x % factors[i]) goto label;
                        flag = 1;
                }
                if (flag) cout << x << endl;
                return;
        }
}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);

        auto start = chrono::high_resolution_clock::now();
                calculate(15);
        auto end = chrono::high_resolution_clock::now();

        double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
        time_taken *= 1e-9;
        cout << "running time: " << fixed << time_taken << setprecision(20) << " sec" << endl;
        return 0;

}

//2.96 sec

*/