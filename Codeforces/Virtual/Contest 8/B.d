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
                int p = cin.readInt;
                int y = cin.readInt;
                if (y % 2 == 0) y--;
                for (int i = y; i >= 2; i -= 2) {
                        int flag = 0;
                        for (int j = (p % 2 == 0 ? p - 1 : p); j >= 2; j -= 2) {
                                if (i % j == 0) {
                                        flag = 1; 
                                        goto label;
                                }
                        }
                        label:
                        if (flag == 0) {
                                writeln(i);
                                return;
                        }
                }
                writeln(-1);
        }
        return;
}