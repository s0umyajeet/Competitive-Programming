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
                int[] a = new int[](n);
                int[] b = new int[](n);
                foreach (ref i; a) i = cin.readInt;
                foreach (ref i; b) i = cin.readInt;
                long maxOR = -999999;
                for (int i = 0; i < n; i++) {
                        long aOR, bOR;
                        for (int j = i; j < n; j++) {
                                aOR |= a[j];
                                bOR |= b[j];
                        }
                        maxOR = max(maxOR, aOR + bOR);

                }
                writeln(maxOR);
        }        
}