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
        t = cin.readInt;
        while (t--) {
                int[3] a = new int[3];
                int[3] b = new int[3];
                foreach (ref i; a) i = cin.readInt;
                foreach (ref i; b) i = cin.readInt;
                int ans = 0;
                if (a[2] >= b[1]) writeln(2 * 
        }        
}