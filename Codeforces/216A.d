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
                int b = cin.readInt;
                int p = cin.readInt;
                int w = 0;
                for (int i = 0; i < n; i++) {
                        int x = cin.readInt;
                        if (x == 1) {
                                (b == 0) ? w++ : b--;
                        }
                        if (x == 2) {
                                if (b == 0 && p == 0) w++;
                                else if (b == 0 && p > 0) p--;
                                else if (p == 0 && b > 0) b--;
                                else p--;
                        }
                }
                writeln(w);
        }        
}