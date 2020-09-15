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
        int n_Cases = 1;
        // n_Cases = cin.readInt;
        
	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                int r1 = cin.readInt;
                int r2 = cin.readInt;
                int c1 = cin.readInt;
                int c2 = cin.readInt;
                int d1 = cin.readInt;
                int d2 = cin.readInt;

                int reqSum = (r1 + r2 + c1 + c2 + d1 + d2) / 3;

                bool notFound = false;
                for (int x = 1; x <= 9; x++) {
                        for (int y = 1; y <= 9; y++) {
                                for (int z = 1; z <= 9; z++) {
                                        for (int w = 1; w <= 9; w++) {
                                                bool[] c = new bool[7];
                                                c[0] = (x + y + z + w == reqSum);
                                                c[1] = (x + z == c1);
                                                c[2] = (y + w == c2);
                                                c[3] = (x + y == r1);
                                                c[4] = (z + w == r2);
                                                c[5] = (x + w == d1);
                                                c[6] = (y + z == d2);

                                                bool fail = false;
                                                for (int i = 0; i < c.length; i++) {
                                                        if (!c[i]) {
                                                                fail = true;
                                                                break;
                                                        }
                                                }
                                                if (!fail) {
                                                        writeln(x, " ", y);
                                                        writeln(z, " ", w);
                                                        break;
                                                } else notFound = true;
                                        }
                                }
                        }
                }
                if (notFound) writeln(-1);
	}    
}