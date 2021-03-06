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

int solve(string s) {
        if (s.to!int > 0) return s.to!int;
        else {
                if (s.to!int > -10) return s.to!int;
                else {
                        char[] s1 = s.dup;
                        int n = s1.length;
                        if (s1[n - 1] < s[n - 2]) {
                                s1 = s1.remove(n - 2);
                        } else s1 = s1.remove(n - 1);
                        return s1.to!int;
                }
        }
}
void main() {
        IO cin;
        int t = 1;
        // t = cin.readInt;
        while (t--) {
                string s = cin.readString;
                writeln(solve(s));
        }        
}