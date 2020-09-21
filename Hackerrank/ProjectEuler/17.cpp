#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

bool _3digit(vector<int> v) {
	return v[2] != 0;
}

bool _2digit(vector<int> v) {
	return v[2] == 0 && v[1] != 0;
}

bool _1digit(vector<int> v) {
	return v[2] == 0 && v[1] == 0 && v[0] != 0;
}

map<int, string> mp;

string func(string s) {
	int n = stoi(s);
	vector<int> v(3);
	
	int j = 2;
	
	while (n) {
		v[j] = (n % 10);
		n /= 10;
		j--;
	}

	string sentence;
	reverse(v.begin(), v.end());

	//debug
	// for (auto x : v) cout << x << " ";
	// cout << endl;
	// cout << _3digit(v) << " " << _2digit(v) << " " << _1digit(v) << endl;
	if (_3digit(v)) {
		sentence = mp[v[2]] + " hundred ";
		if (v[1] == 0) {
			if (v[0] != 0) {
				sentence += mp[v[0]];
			}
		} else {
			if (v[0] != 0) {
				if (v[1] * 10 + v[0] >= 20) {
					sentence += mp[v[1] * 10] + " " + mp[v[0]];
				} else {
					sentence += mp[v[1] * 10 + v[0]];
				}
			} else {
				sentence += mp[v[1] * 10];
			}
		}
	} else if (_2digit(v)) {
		if (v[0] != 0) {
			if (v[1] * 10 + v[0] >= 20) {
				sentence += mp[v[1] * 10] + " " + mp[v[0]];
			} else {
				sentence += mp[v[1] * 10 + v[0]];
			}
		} else {
			sentence += mp[v[1] * 10];
		}
	} else if (_1digit(v)) {
		sentence += mp[v[0]];
	}
	return sentence;
}

vector<string> tokenizer(string s) {
	cout << s << endl;
	int count = 0;
	vector<string> tokens;
	int prev = s.size() - 1;
	for (int i = s.size() - 1; i >= 0; i--) {
		count++;
		if (count == 3 or i == 0) {
			tokens.push_back(s.substr(prev, count));
			prev = prev - count + 1;
			count = 0;
		}
	}
	reverse(tokens.begin(), tokens.end());
	return tokens;
}

int32_t main() {	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	cin >> n_Cases;
	

	mp[1] = "one";
	mp[2] = "two";
	mp[3] = "three";
	mp[4] = "four";
	mp[5] = "five";
	mp[6] = "six";
	mp[7] = "seven";
	mp[8] = "eight";
	mp[9] = "nine";
	mp[10] = "ten";
	mp[11] = "eleven";
	mp[12] = "twelve";
	mp[13] = "thirteen";
	mp[14] = "fourteen";
	mp[15] = "fifteen";
	mp[16] = "sixteen";
	mp[17] = "seventeen";
	mp[18] = "eighteen";
	mp[19] = "ninety";
	mp[20] = "twenty";
	mp[30] = "thirty";
	mp[40] = "fourty";
	mp[50] = "fifty";
	mp[60] = "sixty";
	mp[70] = "seventy";
	mp[80] = "eighty";
	mp[90] = "ninety";


	vector<string> tokens;
	
	for (int case_i = 1; case_i <= n_Cases; case_i++) {
		string input;
		cin >> input;
		tokens = tokenizer(input);
	}

	for (auto x : tokens) cout << x << " ";
	cout << endl;
	return 0;
}