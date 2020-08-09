#include <iostream>
using namespace std;

int main() {
        int n;
        cout << "Enter number to terms in pattern: ";
        cin >> n;

        int temp = 2;
        while (n--) {
                cout << temp << " " << temp * 2 << " ";
                temp = temp * 2 - 1;
        }
        return 0;
}