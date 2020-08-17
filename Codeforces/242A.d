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
                char[] s = cin.readString.dup;
                int sitting = 0;
                int standing = 0;
                for (int i = 0; i < s.length; i++) {
                        if (s[i] == 'x') sitting++;
                        else standing++;
                }
                int ans = 0;
                int diff = abs(n / 2 - sitting); 
                if (sitting > standing) {
                        int count = 0;
                        for (int i = 0; count < diff; i++) {
                                if (s[i] == 'x') {
                                        s[i] = 'X';
                                        count++;
                                }
                        }
                } else {
                        int count = 0;
                        for (int i = 0; count < diff; i++) {
                                if (s[i] == 'X') {
                                        s[i] = 'x';
                                        count++;
                                }
                        }
                }
                writeln(diff);
                foreach (x; s) write(x);
                writeln();
        }        
}