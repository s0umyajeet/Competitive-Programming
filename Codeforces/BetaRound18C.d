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
        string read_string() {
                while (tk.empty) 
                        tk = readln.split;
                auto tkt = tk.front;
                tk.popFront;
                return tkt;
        }
        int read_int() { 
                return read_string.to!int; 
        }
        double read_double() { 
                return read_string.to!double; 
        }
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.read_int;
        while (t--) {
                int n = cin.read_int;
                int[] arr = new int[n];
                foreach (ref i; arr) i = cin.read_int;

                int[] sum_for = new int[n];
                sum_for[0] = arr[0];
                for (int i = 1; i < n; i++) {
                        sum_for[i] += arr[i] + sum_for[i - 1];
                }

                reverse(arr);

                int[] sum_back = new int[n];
                sum_back[0] = arr[0];
                for (int i = 1; i < n; i++) {
                        sum_back[i] += arr[i] + sum_back[i - 1];
                }

                int count = 0;
                for (int i = 0; i < n - 1; i++) {
                        if (sum_for[i] == sum_back[n - 2 - i])
                                count++;
                }
                
                writeln(count);
        }        
}