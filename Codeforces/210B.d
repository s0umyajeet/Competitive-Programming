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
        string read_string() {
                while (tokens.empty) {
                tokens = readln.split;
        }
        auto token = tokens.front;
                tokens.popFront;
                return token;
        }
        int read_int() {
                return read_string.to!int;
        }

        double read_double() {
                return read_string.to!double;
        }
        
        string[] tokens;
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.read_int;
        while (t--) {
                int n = cin.read_int;
                int k = cin.read_int;

                int[] arr = new int[n];
                if (k == n) writeln(-1);
                else {
                        for (int i = n; i > n - k; i--) {
                                arr[i - 1] = i;
                        }
                        for (int i = 1; i < n - k; i++) {
                                arr[i - 1] = i + 1;
                        }
                        arr[n - k - 1] = 1;
                        foreach (i; arr) write(i, " ");
                }
        }        
}