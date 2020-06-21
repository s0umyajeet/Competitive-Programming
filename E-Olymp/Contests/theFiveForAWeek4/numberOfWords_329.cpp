//90% accepted
#include <bits/stdc++.h>
using namespace std;

int main() {
        string s;
        getline(cin >> ws, s);
        
        auto itr = unique(s.begin(), s.end());
        s.resize(itr - s.begin());

        int ans = count(s.begin(), s.end(), ' ');
        if (s[s.size() - 1] == ' ') ans --;
        
        cout << ans + 1 << endl;
        return 0;
}