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
                char[] s = cin.readString.dup;
                int x1 = cin.readInt;
                int y1 = cin.readInt;
                int q = cin.readInt;
                int maxUp = s.count("U").to!int;
                int maxDown = s.count("D").to!int;
                int maxRight = s.count("R").to!int;
                int maxLeft = s.count("L").to!int;
                while (q--) {
                        int x2 = cin.readInt;
                        int y2 = cin.readInt;
                        int needRight;
                        int needLeft;
                        int needUp;
                        int needDown;
                        if (x2 >= x1) {
                                needRight = x2 - x1;
                        } else needLeft = x1 - x2;
                        if (y2 >= y1) {
                                needUp = y2 - y1;
                        } else needDown = y1 - y2;

                        if (needRight <= maxRight && needLeft <= maxLeft && needUp <= maxUp && needDown <= maxDown) {
                                write("YES ");
                                writeln(abs(x2 - x1) + abs(y2 - y1));
                        } else {
                                writeln("NO");
                        }
                }
        }        
}