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
                int n = cin.readInt;
                int k = cin.readInt;
                int[] d = new int[n * k + 1];
                int[int] map;
                int[][] c = new int[][](k);

                for (int i = 0; i < k; i++) {
                        int input = cin.readInt;
                        d[input] = 1;
                        map[i] = input;
                }
                
                int offSet = 1;
                for (int i = 0; i < k; i++) {
                        c[i] ~= map[i];
                        int count = 1;
                        for (int j = offSet; count < n;) {
                                if (!d[j]) {
                                        c[i] ~= j;
                                        d[j] = 1;
                                        count++;
                                        j++;
                                        offSet = j;
                                } else {
                                        offSet++;
                                        j++;
                                }
                        }
                }

                for (int i = 0; i < k; i++) {
                        for (int j = 0; j < c[i].length; j++) {
                                write(c[i][j], " ");
                        }
                        writeln();
                }
        }        
}