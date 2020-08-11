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
        string readString() {
                while (tk.empty) 
                        tk = readln.split;
                auto tkt = tk.front;
                tk.popFront;
                return tkt;
        }
        int readInt() { 
                return readString.to!int; 
        }
        double readDouble() { 
                return readString.to!double; 
        }
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.readInt;
        while (t--) {
                string s1 = cin.readString;
                string s2 = cin.readString;
                string s3 = cin.readString;

                int[3] count;
                if (s1[1] == '<') {
                        count[s1[2] - 'A']++;
                        count[s1[0] - 'A']--;
                } else {
                        count[s1[0] - 'A']++;
                        count[s1[2] - 'A']--;
                }
                if (s2[1] == '<') {
                        count[s2[2] - 'A']++;
                        count[s2[0] - 'A']--;
                } else {
                        count[s2[0] - 'A']++;
                        count[s2[2] - 'A']--;
                }
                if (s3[1] == '<') {
                        count[s3[2] - 'A']++;
                        count[s3[0] - 'A']--;
                } else {
                        count[s3[0] - 'A']++;
                        count[s3[2] - 'A']--;
                }

                for (int i = 1; i < 3; i++) {
                        if (count[i] == count[i - 1]) {
                                writeln("Impossible");
                                return;
                        }
                }
                
        }        
}