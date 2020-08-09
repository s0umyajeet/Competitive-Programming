#include <bits/stdc++.h>
using namespace std;
//For fixed test case, for N test cases, consider the implementation below

long long primeSieveSum(long long n) {
        vector<long long> primes(n + 1, true);
        long long sum = 0;
        primes[0] = false;
        primes[1] = false;
        
        for (int i = 2; i * i <= n; i++) {
                if (primes[i]) {
                        for (int j = i * i; j <= n; j += i) primes[j] = false;
                }
        }
        for (int i = 2; i <= n; i++) if (primes[i]) sum += i;
        return sum;
}
void calculate(int n) {
        long long ans = primeSieveSum(n);
        //for (auto x : ans) cout << x << " ";
        cout << ans << endl;
}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);

        auto start = chrono::high_resolution_clock::now();
                calculate(2000000);
        auto end = chrono::high_resolution_clock::now();

        double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
        time_taken *= 1e-9;
        cout << "running time: " << fixed << time_taken << setprecision(20) << " sec" << endl;
        return 0;

}

/*

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
vector<long long> sum(1e6 + 1);

void primeSieveSum() {
        vector<long long> primes(1e6 + 1, true);
        primes[0] = false;
        primes[1] = false;
        
        for (int i = 2; i * i <= 1e6; i++) {
                if (primes[i]) {
                        for (int j = i * i; j <= 1e6; j += i) primes[j] = false;
                }
        }
        long long temp_sum = 0;
        for (int i = 2; i <= 1e6; i++) {
            if (primes[i]) temp_sum += i;
            sum[i] = temp_sum;
        }
}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);

        int t;
        cin >> t;

        primeSieveSum();
        while (t--) {
            int n; cin >> n;
            cout << sum[n] << endl;
        }
        return 0;
}
*/