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

bool solve(int pos, int n, int k, ref string arr) {
        bool ans = false;
        for (int j = 1; j <= k; j++) {
                if (pos + j >= n - 1) return true;
                if (arr[pos + j] == '.') ans |= solve(pos + j, n, k, arr);
        }
        return ans;
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.readInt;
        while (t--) {
                int n = cin.readInt;
                int k = cin.readInt;
                string s = cin.readString;
                writeln(solve(0, n, k, s) ? "YES" : "NO");
        }        
}