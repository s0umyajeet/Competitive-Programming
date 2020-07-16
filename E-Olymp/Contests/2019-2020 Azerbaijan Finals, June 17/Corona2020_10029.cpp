#include <bits/stdc++.h>
using namespace std;

int a, b, c;
void print(char sign1, char sign2) {
        cout << a << sign1 << b << sign2 << c << endl;  
}
int main() {
        
        cin >> a >> b >> c;
        if (a + b + c == 2020) {
                print('+', '+');
                return 0;
        }
        if (a + b - c == 2020) {
                print('+', '-');
                return 0;
        }
        if (a - b + c == 2020) {
                print('-', '+');
                return 0;
        }
        if (a - b - c == 2020) {
                print('-', '-');
                return 0;
        }
        cout << "CORONA" << endl;
        return 0;
}