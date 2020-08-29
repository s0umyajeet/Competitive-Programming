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

int n, m;
int start, finish;
const int INT_MAX = int.max;

struct Pair {
        int first;
        int second;
        this(int f, int s) {
                first = f;
                second = s;
        }
}

int findNextMin(ref bool[] visited, ref int[] dist) {
        int min_dist = INT_MAX;
        int min_index = 0;
        for (int i = 0; i < n; i++) {
                if (!visited[i] && dist[i] <= min_dist) {
                        min_dist = dist[i];
                        min_index = i;
                }
        }
        return min_index;
}

void Dijkstra(ref Pair[][] adj) {
        start = 0;
        finish = n - 1;

        int[] dist = new int[n];
        foreach (ref i; dist) i = INT_MAX;
        int[] p = new int[n];
        foreach (ref i; p) i = -1;
        bool[] visited = new bool[n];
        foreach (ref i; visited) i = false;
        
        dist[start] = 0;
        
        for (int i = 0; i < n; i++) {
                int u = findNextMin(visited, dist);
                visited[u] = true;
                foreach (x; adj[u]) {
                        int to = x.second;
                        int edge = x.first;
                        if (!visited[to] && dist[u] != INT_MAX && dist[u] + edge < dist[to]) {
                                dist[to] = dist[u] + edge; 
                                p[to] = u;
                        }
                }
        }
        if (dist[finish] == INT_MAX) {
                writeln(-1);
        } else {
                int[] path;
                for (int v = finish; v != start; v = p[v]) path ~= v;
                path ~= start;
                for (int i = path.length - 1; i >= 0; i--) {
                        write(path[i] + 1, " ");
                }
        }
}
void main() {
        IO cin;
        int t = 1;
        // t = cin.readInt;
        while (t--) {
                n = cin.readInt;
                m = cin.readInt;
                Pair[][] adj = new Pair[][](n);
                for (int i = 0; i < m; i++) {
                        int a = cin.readInt;
                        int b = cin.readInt;
                        int w = cin.readInt;
                        adj[a - 1] ~= Pair(w, b - 1);
                        adj[b - 1] ~= Pair(w, a - 1);
                }                
                Dijkstra(adj);
        }        
}