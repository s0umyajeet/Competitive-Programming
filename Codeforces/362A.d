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
                long tt = cin.readInt;
                long s = cin.readInt;
                long x = cin.readInt;
                if (tt > x) {
                        writeln("NO");
                        return;
                }
                if (tt == x) {
                        writeln("YES");
                        return;
                }
                long i = 1;
                while (1) {
                        tt = tt + s * i;
                        // writeln(tt, " ");
                        if (tt == x || tt + 1 == x) {
                                writeln("YES");
                                return;
                        }
                        i++;
                        if (tt > x) break;
                } 
                writeln("NO");
        }        
}