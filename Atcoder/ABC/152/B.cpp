#include <bits/stdc++.h>
using namespace std;

int main() {
        int a, b;
        cin >> a >> b;

        string s1 = "", s2 = "";
        
        for (int i = 0; i < a; i++) {
                s1 += to_string(b);
        }

        for (int i = 0; i < b; i++) {
                s2 += to_string(a);
        }

        vector<string> v;
        v.push_back(s1);
        v.push_back(s2);

        if (lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end()))
                cout << s1 << endl;
        else cout << s2 << endl;
        return 0;
}