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
bool check(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
                if (arr[i] > arr[i + 1]) return false;
        }
        return true;
}
void main() {
        IO cin;
        int t = 1;
        // t = cin.readInt;
        while (t--) {
                int n = cin.readInt;
                int[] arr = new int[n];
                foreach (ref i; arr) i = cin.readInt;
                int maxx = -9999;
                for (int i = n; i > 0; i--) {
                        for (int j = 0; j < i; j++) {
                                if (check(arr[j..i])) {
                                        maxx = max(maxx, i - j);
                                }
                        }
                }
                writeln(maxx);
        }        
}