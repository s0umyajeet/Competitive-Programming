#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cout << "how many: ";
        cin >> n;

        srand(time(0));
        fstream output_file;
        output_file.open("output.txt", ios::out);

        for (int i = 0; i < n; i++) {
                string ans;
                for (int i = 0; i < 50; i++) {
                        ans += rand() % 10 + 48;
                }
                output_file << ans << endl;
        }
        return 0;
}
