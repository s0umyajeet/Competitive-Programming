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
                int n = cin.readInt;
                int m = cin.readInt;

                int[] people = new int[n];

                foreach (ref i; people) i = cin.readInt;
                
                int bus = 1;
                int remaining = m;
                int currGroup = 0;              

                for (; currGroup < n;) {
                        if (remaining >= people[currGroup]) {
                                remaining -= people[currGroup];
                                currGroup++;
                        }
                        if (currGroup == n) break;
                        if (remaining < people[currGroup]) {
                                bus++;
                                remaining = m;
                        }
                }
                writeln(bus);
        }
}