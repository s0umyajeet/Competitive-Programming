#include <bits/stdc++.h>
using namespace std;

vector<int> rec(1000001, -1);
void calculate() {
        long long ans = 1, t = 0, x = 0;
        for (int i = 1; i <= 1000000; i++) {
                x = 0, t = i;
                while (t != 1) {
                        if (t & 1) t = 3 * t + 1;
                        else t /= 2;
                        if (rec[t] != -1) x += rec[t];
                        else x++;                        
                }
                rec[t] = x;
                ans = max(ans, x);
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



ek naya c++ file banao
apne me 
dekhte hai mere me banta hai ya nahi
kese?
ruko


left side upr dekho do files bnai hongi
bani*
kaha

jaha icon bana hai 
top left corner uske niche 
yaha?