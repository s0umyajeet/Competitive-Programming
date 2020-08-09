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
                int d = cin.read_int;
                int lower = 0;
                int upper = 0;
                int[][] arr = new int [][](n, 2);
                for (int i = 0; i < n; i++) {
                        arr[i][0] = cin.read_int;
                        arr[i][1] = cin.read_int;
                        lower += arr[i][0];
                        upper += arr[i][1];
                }
                if (d >= lower && d <= upper) {
                        writeln("YES");
                        for (int i = 0; i < n - 1; i++) {
                                write(arr[i][0], " ");
                        }
                        write(d - sum(arr[0..n][0]), " ");
                } else {
                        writeln("NO");
                }
        }        
}