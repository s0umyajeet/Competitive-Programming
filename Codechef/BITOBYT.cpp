#include <bits/stdc++.h>
using namespace std;

string multiply_by_2(string x) {
        string ans;
        int carry = 0;
        int prod;

        for (int i = x.size() - 1; i >= 0; i--) {
                prod = ((x[i] - 48) * 2) + carry;
                ans += (char)(48 + (prod % 10));
                if (prod / 10) carry = 1;
                else carry = 0;
        }
        if (carry) ans += (48 + carry);
        reverse(ans.begin(), ans.end());
        return ans;
}

int main() {
        int t;
        cin >> t;
        while (t--) {
                unsigned long long n;
                cin >> n;
                
                string bits, nibbles, bytes;
                bits = "1";
                for (int i = 1; i < n; i++) {
                        if (i % 2 == 0) {
                                if (bits > 0) nibbles += bits;
                                bits = 0;
                        }
                        if (i % 8 == 0) {
                                if (nibbles > 0) bytes += nibbles;
                                nibbles = 0;
                        } 
                        if (i % 16 == 0) {
                                if (bytes > 0) bits = bytes * 2;
                                bytes = 0;                        
                        }
                        cerr << "t = " << i << " : " << bits << " " << nibbles << " " << bytes << endl;
                }
                cout << bits << " " << nibbles << " " << bytes << endl;
        }
}       