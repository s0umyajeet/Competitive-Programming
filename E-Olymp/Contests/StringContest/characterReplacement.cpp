#include <bits/stdc++.h>
using namespace std;

int main()
{
        string s;
        getline(cin >> ws, s);
        for (int i = 0; i < s.size(); i++)
        {
                if (s[i] == 'a') s[i] = 'b';
                else if (s[i] == 'b') s[i] = 'a';
        }
        cout << s << endl;
        return 0;
}