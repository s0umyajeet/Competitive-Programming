#include <bits/stdc++.h>
using namespace std;

//vector<booL> inital
bool checkOK(string s, int i, int k) {
        int start = i - k;
        int end = i + k;
        if (i - k < 0) start = 0;
        if (i + k > s.size() - 1) end = s.size() - 1;

        bool x = true;
        for (int i = start; i <= end; i++) {
                if (s[i] == '1') {
                        x = false;
                        break;
                }
        }
        return x;
}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin >> t;
        while (t--) {
                int n, k;
                cin >> n >> k;
                int count = 0;
                string s;
                cin >> s;

                for (int i = 0; i < s.size(); i++) {
                        if (s[i] == '0') {
                                if (checkOK(s, i, k)) {
                                        s[i] = '1';
                                        count++;
                                }
                        }
                }
                cout << s << " " << count << endl;
        }
        return 0;
}