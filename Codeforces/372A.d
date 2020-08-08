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
                int c = cin.read_int;
                
                int[] arr = new int[n];
                
                foreach(ref x; arr) {
                        x = cin.read_int;
                }

                int count = 0;
                for (int i = 0; i < n - 1; i++) {
                        if (arr[i + 1] - arr[i] <= c) {
                                count++;
                        } else count = 0;
                }

                writeln(count + 1); 
                //plus one since the first word is always added
        }        
}