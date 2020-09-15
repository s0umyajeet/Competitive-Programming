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
        int tt = 1;
        // t = cin.readInt;
        while (tt--) {
                double k = cin.readDouble;
                double d = cin.readDouble;
                double t = cin.readDouble;
                double need = t;
                double done = 0.0;
                double counter = 1.0;
                bool on = true;
                int counter2 = 0;
                while (done < need) {
                        if (on) {
                                done += 1.0;
                                counter2++;
                        } else done += 0.5;
                        if (done == need) break;
                        if (counter2 == k) {
                                on = false;
                                counter2 = 0;
                        }
                        if (counter % d == 0) {
                                if (!on) {
                                        counter2 = 0;
                                        on = true;
                                }
                        }
                        writeln("at t = ", counter, " done = ", done, " on = ", on);
                        counter++;
                }
                writefln("%6f", done);   
        }        
}