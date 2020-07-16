#include <bits/stdc++.h>
using namespace std;

int func(int n, vector<int>& temp) {
        return accumulate(temp.rbegin(), temp.rbegin() + n, 0);
}

int main() {
        string x;
        cin >> x;

        int countA = count(x.begin(), x.end(), 'A');
        int countB = count(x.begin(), x.end(), 'B');
        vector<int> arrB(x.size());

        int tempCountA = 0;
        int tempCountB = 0;
        vector<int> temp;

        for (int i = 0; i < x.size(); i++) {
                if (x[i] == 'A') {
                        tempCountA++;
                        arrB[i] = countB - tempCountB;
                }
                if (x[i] == 'B') {
                        tempCountB++;
                        arrB[i] = countA - tempCountA;
                        temp.push_back(arrB[i]);
                }
        }

        int ans = 0;
        for (int i = 0; i < x.size(); i++) {
                if (x[i] == 'A') {
                        ans += func(arrB[i], temp);
                }
        }
        cout << ans << endl;
}