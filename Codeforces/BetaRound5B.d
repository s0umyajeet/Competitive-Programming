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
import std.array;

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

void printSpaces(int n) {
        while (n--) {
                write(" ");
        }
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.read_int;
        while (t--) {
                string[] arr = stdin.byLineCopy.array;
                // writeln(arr[0..$]);
                int max_len = -999;
                foreach(i; arr) {
                        max_len = max(max_len, cast(int)i.length);
                }

                for (int i = 0; i < max_len + 2; i++) {
                        write("*");
                }      
                int alt = 0;
                writeln();
                for (int i = 0; i < arr.length; i++) {
                        write("*");
                        int sample_len = cast(int)arr[i].length;
                        int diff = (max_len - sample_len);
                        if (diff % 2 == 0) {
                                printSpaces(diff / 2);
                                write(arr[i]);
                                printSpaces(diff / 2);
                        } else {
                                if (alt % 2 == 0) {
                                        printSpaces(diff / 2);
                                        write(arr[i]);
                                        printSpaces(diff / 2 + 1);
                                        alt = 1;
                                } else {
                                        printSpaces(diff / 2 + 1);
                                        write(arr[i]);
                                        printSpaces(diff / 2);
                                        alt = 0;
                                }
                        }
                        writeln("*");
                }

                for (int i = 0; i < max_len + 2; i++) {
                        write("*");
                }
        }        
}