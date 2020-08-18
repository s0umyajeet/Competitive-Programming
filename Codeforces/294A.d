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
                int scoreW = 0;
                int scoreB = 0;
                for (int i = 0; i < 8; i++) {
                        string s = cin.readString;
                        for (int j = 0; j < 8; j++) {
                                if (s[j] == 'Q') scoreW += 9;
                                if (s[j] == 'q') scoreB += 9;
                                if (s[j] == 'R') scoreW += 5;
                                if (s[j] == 'r') scoreB += 5;
                                if (s[j] == 'B') scoreW += 3;
                                if (s[j] == 'b') scoreB += 3;
                                if (s[j] == 'N') scoreW += 3;
                                if (s[j] == 'n') scoreB += 3;
                                if (s[j] == 'P') scoreW += 1;
                                if (s[j] == 'p') scoreB += 1;
                        }
                }
                if (scoreW > scoreB) writeln("White");
                else if (scoreB > scoreW) writeln("Black");
                else writeln("Draw");
                        
        }        
}