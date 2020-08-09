//https://atcoder.jp/contests/abc043/tasks/abc043_b
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        string s, ans;
        cin >> s;

        for (int i = 0; i < s.size(); i++) {
                if(s[i] == 'B') { 
                        if (ans.size()) ans.pop_back();
                } else ans += s[i];
        }
        cout << ans << endl;
        return 0;
}

/*

wtf was wrong with my solution
//https://a...content-available-to-author-only...r.jp/contests/abc043/tasks/abc043_b
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        string s, ans;
        cin >> s;

        for (int i = 0; i < s.size(); i++) {
                if(s[i] == 'B' && ans.size()) {
                        ans.pop_back();
                } else ans += s[i];
        }
        cout << ans << endl;
        return 0;
}


 */