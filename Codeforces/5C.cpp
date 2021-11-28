// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define endl "\n"

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int n_Cases = 1;
// 	// cin >> n_Cases;

// 	for (int case_i = 1; case_i <= n_Cases; case_i++) {
// 		string s;
// 		cin >> s;

// 		int tick = 0, ans = 0, cnt = 0, ok = 0;
// 		bool flag = false;

// 		for (int i = 0; i < s.size(); i++) {
// 			if (s[i] == ')') tick--;
// 			if (s[i] == '(') tick++;

// 			if (tick >= 0) ok++;
// 			if (tick == -1 || tick == 0) {
// 				if (ok > ans) {
// 					ans = ok;
// 					cnt = 1;
// 				} else if (ok == ans && ans != 0) {
// 					cnt++;
// 				}
// 				if (tick != 0) {ok = 0;}
// 			} 
// 		}
// 		if (!flag) { ans = ok; cnt = 1;}

// 		if (cnt == 0) cout << "0 1";
// 		else cout << ans << " " << cnt << endl;
// 	}
// 	return 0;
// }

    #include <bits/stdc++.h>
    using namespace std;
     
    #define int long long
    #define endl "\n"
     
    int32_t main() {
    	ios_base::sync_with_stdio(0);
    	cin.tie(0);
     
    	int n_Cases = 1;
    	// cin >> n_Cases;
     
    	for (int case_i = 1; case_i <= n_Cases; case_i++) {
    		string s;
    		cin >> s;
     
    		int tick = 0, ans = 0, cnt = 0, ok = 0;
     
    		for (int i = 0; i < s.size(); i++) {
    			if (s[i] == ')') tick--;
    			if (s[i] == '(') tick++;
     
    			if (tick >= 0) ok++;
    			if (tick == -1 || tick == 0) {
    				if (ok > ans) {
    					ans = ok;
    					cnt = 1;
    				} else if (ok == ans && ans != 0) {
    					cnt++;
    				}
    				tick = ok = 0;
    			} 
    		}
     
    		if (cnt == 0) cout << "0 1";
    		else cout << ans << " " << cnt << endl;
    	}
    	return 0;
    }