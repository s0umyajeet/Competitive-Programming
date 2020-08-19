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

// int n, m, f;

int bfs(ref int[][] adj, int n, int s, int f) {
        bool[] visited = new bool[n];
        visited[s - 1] = true;
        
        int[] q = new int[n];
        q ~= s - 1;
        
        int[] dist = new int[n];
        dist[s - 1] = 0;

        while (q.length > 0) {
                int v = q.front;
                q = q.remove(0);

                foreach (u; adj[v]) {
                        if (!visited[u]) {
                                visited[u] = true;
                                dist[u] = dist[v] + 1;
                                q ~= u;
                                if (u == f - 1) return dist[u];
                        }
                }
        }
        return -1;
}

void main() {
        IO cin;
        int t = 1;
        // t = cin.read_int;
        while (t--) {
                int n, m, f;
                n = cin.read_int;
                m = cin.read_int;
                f = cin.read_int;

                // writeln(n, " ", m, " ", f);

                int[][] adj = new int[][](n);

                for (int i = 0; i < m; i++) {
                        int a = cin.read_int;
                        int b = cin.read_int;
                        adj[a - 1] ~= (b - 1);
                }       

                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < adj[i].length; i++) {
                                write(adj[i][j], " ");
                        }
                        writeln();
                }

                int maxx = -999;
                for (int i = 0; i < n; i++) {
                        maxx = max(maxx, bfs(adj, n, i, f));
                }
                writeln(maxx);
        }        
}