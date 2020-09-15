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

int n;
int s, f;
const int INT_MAX = int.max;
 
struct Pair {
        int first;
        int second;
        this(int f, int s) {
                first = f;
                second = s;
        }
}

void Dijkstra(ref Pair[][] adj) {
        s--, f--;
        int[] dist = new int(n);
        foreach (ref i; dist) i = INT_MAX;
        auto set = redBlackTree();
}
        
void main() {
        IO cin;
        int n_Cases = 1;
        n_Cases = cin.readInt;
        
	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                n = cin.readInt;
                s = cin.readInt;
                f = cin.readInt;
                Pair[][] adj = new Pair[][](n);
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                int input = cin.readInt;
                                if (input != -1) {
                                        adj[i] ~= Pair(input, j);
                                }
                        }
                }
                Dijkstra(adj);
	}    
}