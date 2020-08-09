#include <bits/stdc++.h>
using namespace std;

int main() {
        vector<int> arr = {12, 12, 12, 34, 5, 5, 67, 67, 12, 88, 88, 34, 45, 56, 56, 45, 65};
        map<int, int> elem_count;

        for (int i = 0; i < arr.size(); i++) elem_count[arr[i]]++;

        for (auto itr = elem_count.begin(); itr != elem_count.end(); itr++) {
                cout << itr->first << " appears " << itr-> second << " times" << endl;
        }
        return 0;
}