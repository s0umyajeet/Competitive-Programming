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
                auto s = readln();
                int n = s.parse!int;
                string s1 = s.strip;
                if (s1 == "of week") {
                        if (n == 5 || n == 6) writeln(53);
                        else writeln(52); 
                        return;
                }
                if (s1 == "of month") {
                        if (n >= 1 && n <= 29) writeln(12);
                        else if (n == 30) writeln(11);
                        else writeln(7);
                }
        }        
}