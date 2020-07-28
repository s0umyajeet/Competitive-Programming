#include <bits/stdc++.h>
using namespace std;

int main() {
        string s;
        getline(cin >> ws, s);
        if (s[0] != ' ') 
                s[0] -= 32;
        for (int i = 1; i < s.size(); i++) {
                if (s[i] != ' ' && s[i - 1] == ' ') 
                        s[i] -= 32;
        }
        cout << s << endl;
        return 0;
}