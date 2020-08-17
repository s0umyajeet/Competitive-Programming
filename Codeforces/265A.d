module _template;
import std.stdio;
import std.string;
import std.algorithm;
import std.container;
import std.range;
import std.math;
import std.numeric;
import std.conv;
import std.typecons;
import std.format;

struct IO {
        string[] tk;
        string readString() {
                while (tk.empty) 
                        tk = readln.split;
                auto tkt = tk.front;
                tk.popFront;
                return tkt;
        }
        int readInt() { 
                return readString.to!int; 
        }
        double readDouble() { 
                return readString.to!double; 
        }
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.readInt;
        while (t--) {
                int n = cin.readInt;
                string arr = cin.readString;
                int ans = 0;
                int carry = 0;
                for (int i = 0; i < n; i++) {
                        if (!carry && !(arr[i] - '0')) {
                                ans++;
                                carry = 0;
                        } else if (carry && (arr[i] - '0')) carry = 1;
                        else if (carry && !(arr[i] - '0')) carry = 1;
                        else {        
                                ans++;
                                carry = 1;
                        }
                }
                writeln(ans);
        }        
}