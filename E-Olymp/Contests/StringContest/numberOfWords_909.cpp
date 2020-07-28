#include <bits/stdc++.h>
using namespace std;

int main() {
        string s;
        getline(cin >> ws, s);
        
        int count = 0;
        for (auto itr = s.begin(); itr != s.end(); itr++) {
                if (*itr != ' ') {
                        count++;
                        itr = find(itr, s.end(), ' ');
                        if (itr == s.end()) break;
                }
        }
        cout << count << endl;
}
