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

double dist(int x1, int y1, int x2, int y2) {
        double dist = sqrt((x1.to!double - x2.to!double) ^^ 2 + (y1.to!double - y2.to!double) ^^ 2).to!double;
        return dist;
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.readInt;
        while (t--) {
                int n = cin.readInt();
                int k = cin.readInt();
                int[][] points = new int[][](n, 2);
                for (int i = 0; i < n; i++) {
                        int a = cin.readInt;
                        int b = cin.readInt;
                        points[i][0] = a;
                        points[i][1] = b;
                }
                double totalDistance = 0;
                for (int i = 1; i < n; i++) {
                        totalDistance += dist(points[i][0], points[i][1], points[i - 1][0], points[i - 1][1]);
                }
                double time = k * cast(double)(totalDistance / 50.0);
                writefln("%.9f", time); 
        }        
}