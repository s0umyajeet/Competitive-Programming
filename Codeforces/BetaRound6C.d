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
                int[] arr = new int[n];
                for (int i = 0; i < n; i++) {
                        arr[i] = cin.read_int;
                }
                int[] alice = new int[n];
                int[] bob = new int[n];

                alice[0] = arr[0];
                for (int i = 1; i < n; i++) {
                        alice[i] = alice[i - 1] + arr[i];
                }
                
                reverse(arr);
                
                bob[0] = arr[0];
                for (int i = 1; i < n; i++) {
                        bob[i] = bob[i - 1] + arr[i];
                }

                reverse(arr);

                int total_time = sum(arr[0..$]);
                bool[] eaten = new bool[n];

                int alice_a = 0;
                int bob_a = 0;
                int curr_a = 0;
                int curr_b = 0;

                for (int i = 0; i <= total_time; i++) {
                        if (i == alice[curr_a] && eaten[curr_a] == false) {
                                eaten[curr_a] = true;
                                alice_a++;
                                curr_a++;
                        } 
                        if (i == bob[curr_b] && eaten[n - 1 - curr_b] == false) {
                                eaten[n - 1 - curr_b] = true;
                                bob_a++;
                                curr_b++;
                        }
                }
                writeln(alice_a, " ", bob_a);
        }        
}