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
                double a = cin.readDouble;
                double b = cin.readDouble;
                double c = cin.readDouble;
                double d = cin.readDouble;
                double m = max((3.0 * a) / 10.0, a - (a / 250.0) * c);
                double v = max((3.0 * b) / 10.0, b - (b / 250.0) * d);
                if (abs(m - v) < 0.00001) writeln("Tie");
                else if (m > v) writeln("Misha");
                else writeln("Vasya");
        }        
}