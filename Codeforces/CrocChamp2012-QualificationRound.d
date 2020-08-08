module _template;
import std.stdio;
import std.algorithm;
import std.container;
import std.range;
import std.numeric;
import std.conv;
import std.typecons;
import std.format;

struct IO {
        string read_string() {
                while (tokens.empty) {
                tokens = readln.split;
        }
        auto token = tokens.front;
                tokens.popFront;
                return token;
        }
        
        int read_int() {
                return read_string.to!int;
        }
        
        string[] tokens;
}

void main() {
        IO cin;
        int t = 1;
        // int t = cin.read_int;
        while (t--) {
                int n = cin.read_int;
                string[] arr = new string[n];

                for (int i = 0; i < n; i++) {
                        arr[i] = cin.read_string;
                }
                // writeln(arr[0].length);
                int count = 0;
                bool flag = true;
                for (int i = 0; i < arr[0].length; i++) {
                        for (int j = 0; j < n - 1; j++) {
                                if (arr[j][i] != arr[j + 1][i]) {
                                        flag = false;
                                        break;
                                }
                        }
                        if (flag) count++;
                }               
                writeln(count);
        }        
}