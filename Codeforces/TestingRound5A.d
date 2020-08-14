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

int solve(int a, int b) {
        if (a == 0 || b == 0) return 0;
        else return max(a, b) / min(a, b) + solve(max(a, b) % min(a, b), min(a, b));
}
void main() {
        IO cin;
        int t = 1;
        t = cin.readInt;
        while (t--) {
                int a = cin.readInt;
                int b = cin.readInt;
                writeln(solve(a, b));
        }        
}