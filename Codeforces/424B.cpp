#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        // cin >> t;

        while(t--) {
                string layA, layB;
                cin >> layA >> layB;
                map<char, char> charMap;
                for (int i = 0; i < layA.size(); i++) {
                        charMap[layA[i]] = layB[i];
                }
                string input;
                cin >> input;
                string original = input;
                transform(input.begin(), input.end(), input.begin(), ::tolower);
                for (int i = 0; i < input.size(); i++) {
                        if (input[i] >= 48 && input[i] < 58) cout << input[i];
                        else {
                                auto itr = charMap.find(input[i]);
                                if (original[i] >= 97) {
                                        cout << itr->second;
                                } else {
                                        char c = itr->second;
                                        cout << (char)(c - 32);
                                }
                        }
                }
        }
        return 0;
}