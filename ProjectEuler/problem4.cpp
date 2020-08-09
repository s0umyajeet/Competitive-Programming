#include <bits/stdc++.h>
using namespace std;

long long createPalindrome(const int &n) {
        string s = to_string(n);
        string s1 = s;
        reverse(s.begin(), s.end());
        s1.append(s);
        return stol(s1);
}

void calculate() {
        int found = 0;
        int half = 998, count = 0;
        ofstream obj;
        obj.open("output2.txt");

        while (!found) {
                half--; 
                long long palin = createPalindrome(half);
                for (int i = 999; i > 99; i--) {
                        if (palin / i > 999 || i * i < palin) break;
                        count++;
                        cout << palin << " " << i << " "  << palin / i << " " << count << " " << endl;
                        obj << palin << " " << i << " "  << palin / i << " " << count << " " << endl;

                        if (palin % i == 0) {
                                found = 1;
                                cout << palin << " " << count << endl;
                                return;
                        }
                }
        }
        obj.close();
}


int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0), cout.tie(0);

        auto start = chrono::high_resolution_clock::now();
                calculate();
        auto end = chrono::high_resolution_clock::now();

        double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
        time_taken *= 1e-9;
        cout << "running time: " << fixed << time_taken << setprecision(20) << " secs" << endl;
        return 0;
}

//0.051931 sec