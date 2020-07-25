#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	map<char, int> m;
	for (int i = 0; i < s.size(); i++) {
		m[s[i]]++;
	}
        auto itr = m.end();
        itr--;
	int count = itr->second;

	for (int i = 0; i < count; i++) {
		cout << itr->first;
	}
	return 0;
}