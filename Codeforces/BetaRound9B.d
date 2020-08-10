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

double distance(int x1, int y1, int x2, int y2) {
        double dist = sqrt((x2.to!double - x1.to!double) ^^ 2 + (y1.to!double - y2.to!double) ^^ 2);
        return dist;
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.read_int;
        while (t--) {
                int n = cin.read_int;
                int vb = cin.read_int;
                int vs = cin.read_int;

                int[] arr = new int[n];
                double[] time_s = new double[n];

                time_s[0] = 999999999;
                foreach (ref i; arr) i = cin.read_int;
                
                int ux = cin.read_int;
                int uy = cin.read_int;
                
                for (int i = 1; i < n; i++) {
                        // writeln(distance(arr[i], 0, ux, uy));
                        time_s[i] = (distance(arr[i], 0, ux, uy)) / vs;
                        // writeln(time_s[i]);
                }
                double min_total_time = 999999999;
                for (int i = 1; i < n; i++) {
                        double total_time = (arr[i] / vb.to!double) + time_s[i];
                        // writeln(total_time);
                        min_total_time = min(min_total_time, total_time);
                }
                // writeln(min_total_time);
                int ans = 0;
                double min_time = 999999999.0;
                for (int i = 1; i < n; i++) {
                        if (abs((arr[i] / vb.to!double) + time_s[i] - min_total_time) < 0.00001) {
                                if (time_s[i] < min_time) {
                                        min_time = time_s[i];
                                        ans = i;
                                }
                        }
                }
                writeln(ans + 1);        
        }        
}