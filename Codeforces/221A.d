//64-bit Integers required
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
                string s = cin.readString;
                auto loc = s.indexOf('^');
                long l = 0, r = 0;
                for (int i = 0; i < s.length; i++) {
                        if (s[i] >= '1' && s[i] <= '9') {
                                if (i < loc) l += (s[i] - '0') * (loc - i);
                                else r += (s[i] - '0') * (i - loc);
                        }
                }
                if (l == r) writeln("balance");
                else if (l > r) writeln("left");
                else writeln("right");
        }        
}