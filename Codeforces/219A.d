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
                int k = cin.readInt;
                int[10] c = 0;
                for (int i = 0; i < 4; i++) {
                        string s = cin.readString;
                        for (int j = 0; j < 4; j++) 
                                if (s[j] != '.') c[s[j] - '0']++;
                }
                
                for (int i = 0; i < c.length; i++) {
                        if (c[i] > 2 * k) {
                                writeln("NO");
                                return;
                        }
                }
                writeln("YES");
        }        
}