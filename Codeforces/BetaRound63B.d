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

struct Player {
        int l;
        int r;
        int t;
        int c;
        bool[101] track = false;
}

void main() {
        IO cin;
        int n_Cases = 1;
        // n_Cases = cin.readInt;
        
	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                int n = cin.readInt;
                int m = cin.readInt;
                Player[] p = new Player[m];
                for (int i = 0; i < m; i++) {
                        p[i].l = cin.readInt;
                        p[i].r = cin.readInt;
                        p[i].t = cin.readInt;
                        p[i].c = cin.readInt;
                        for (int t = p[i].l; t <= p[i].r; t++) {
                                p[i].track[t] = true;
                        }
                }
                int profit = 0;
                for (int i = 1; i <= n; i++) {
                        int minTime = 99999;
                        int bestPlayer = 0;
                        bool found = false;
                        for (int j = 0; j < m; j++) {
                                if (p[j].track[i] && minTime > p[j].t) {
                                        minTime = p[j].t;
                                        bestPlayer = j;
                                        found = true;
                                }
                        }
                        if (found) profit += p[bestPlayer].c;
                }
                writeln(profit);
        }    
}