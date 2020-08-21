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
                int n = cin.readInt;
                int k = cin.readInt;
                if (k == 0) {
                        if (n % 2 == 0) writeln(0);
                        else writeln(1);
                } else {
                        if (k > n) writeln(k - n);
                        else {
                                if (n % 2 == 0 && k % 2 == 1) writeln(1);
                                else if (n % 2 == 1 && k % 2 == 0) writeln(1);
                                else writeln(0);
                        }
                }                
        }        
}