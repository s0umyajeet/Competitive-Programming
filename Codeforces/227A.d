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
                char[] s = cin.readString.dup;
                char[] tt = cin.readString.dup;
                int s_hr = s[0..2].to!int;
                int s_min = s[3..5].to!int;
                int t_hr = tt[0..2].to!int;
                int t_min = tt[3..5].to!int;
                
                int min = s_min, hr = s_hr;
                hr = (s_hr - t_hr) % 24;
                min = (s_min - t_min) % 60;
                writeln(hr, ":", min);

                // if (s_min > t_min) min = s_min - t_min;
                // else {
                //         if (s_hr == 0) {

                //         } else {
                //                 hr--;
                //                 min = 60 + (s_min - t_min);
                //         }
                // }
                
        }        
}