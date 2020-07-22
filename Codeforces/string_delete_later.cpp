#include <string>
#include <iostream>
using namespace std;

int main() {
        string s = "Hello";
        const char* name = s.c_str();
        cout << name << endl;

        //string -- C++ style string
        //const char* -- C style string

        // cout << s << endl;
        return 0;
}

//ss << a + b


string file_path = "C:/textures/..";
file_path.c_str()       