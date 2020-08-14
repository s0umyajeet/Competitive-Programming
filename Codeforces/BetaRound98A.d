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
                char[] s = cin.readString.dup;
                int turns = 1;
                char c = s[0];
                int i = 1;

                while (i < s.length) {
                        int count = 1;
                        while (i < s.length && s[i] == c && count < 5) {
                                i++;
                                count++;
                        }
                        turns++;
                        if (c == 'C') c = 'P';
                        else c = 'C';
                } 
                writeln(turns);
        }             
}