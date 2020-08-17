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
                int[] c = new int[n];
                int minTime = 99999999;
                for (int i = 0; i < n; i++) {
                        c[i] = cin.readInt;
                }
                for (int i = 0; i < n; i++) {
                        int time = 0;
                        for (int j = 0; j < c[i]; j++) {
                                time += cin.readInt * 5;
                        }
                        time += c[i] * 15;
                        minTime = min(minTime, time);
                }
                writeln(minTime);
        }        
}