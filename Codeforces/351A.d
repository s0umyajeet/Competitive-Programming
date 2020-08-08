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
        
        string[] tokens;
}

void main() {
        IO cin;
        int t = 1;
        // int t = cin.read_int;
        while (t--) {
                int n = cin.read_int;
                int[] arr = new int[n];

                int ans = 0;
                for (int i = 0; i < n; i++) {
                        arr[i] = cin.read_int;
                        if (arr[0] > 15) {
                                writeln(15);
                                return;
                        }
                        if (i != 0) {
                                if (arr[i] - arr[i - 1] > 15) {
                                        writeln(arr[i - 1] + 15);
                                        return;
                                }
                        }
                }
                if (arr[n - 1] + 15 >= 90) {
                        writeln(90);
                } else writeln(arr[n - 1] + 15);
        }        
}