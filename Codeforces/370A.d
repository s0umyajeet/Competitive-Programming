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
                foreach (ref i; arr) {
                        i = cin.read_int;
                }
                int[] ans = new int[n];
                for (int i = n - 1; i >= 0; i--) {
                        if (i == n - 1) ans[i] = arr[i];
                        else ans[i] = arr[i] + arr[i + 1];
                }
                foreach (i; ans) {
                        write(i, " ");
                }
                writeln();
        }        
}