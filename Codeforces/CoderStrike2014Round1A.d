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
                int k = cin.readInt;
                string s = cin.readString;
                if (k <= n - k) {
                        for (int i = 1; i < k; i++) {
                                writeln("LEFT");
                        }
                        for (int i = 0; i < n; i++) {
                                writeln("PRINT ", s[i]);
                                if (i != n - 1) writeln("RIGHT");
                        }
                } else {
                        for (int i = k; i < n; i++) {
                                writeln("RIGHT");
                        }
                        for (int i = n - 1; i >= 0; i--) {
                                writeln("PRINT ", s[i]);
                                if (i != 0) writeln("LEFT");
                        }
                }
        }        
}