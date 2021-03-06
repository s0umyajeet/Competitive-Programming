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

int count_greater(ref int[] a1, int n) {
        int count = 0;
        for (int i = 0; i < a1.length; i++) {
                if (a1[i] > n) {
                        count++;
                }
        }
        return count;
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
                for (int i = 0; i < n; i++) {
                        write(count_greater(arr, arr[i]) + 1, " ");
                }
                writeln();
        }        
}