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
                int[] arr = new int[n];
                foreach (ref i; arr) i = cin.readInt;
                long ans = 0;
                for (int i = 0; i < n - 1; i++) {
                        int diff = 0;
                        if (arr[i + 1] <= arr[i])
                                diff = arr[i] - arr[i + 1];
                        write(diff, " ");
                        ans += diff;
                }
                writeln(ans);
        }        
}