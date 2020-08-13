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
                int[string] map;
                for (int i = 0; i < 10; i++) {
                        string s1 = cin.readString;
                        map[s1] = i;
                }
                for (int i = 0; i < 80; i += 10) {
                        write(map[s[i..i + 10]]);
                }
        }        
}