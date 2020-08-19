#include <vector>
#include <set>
using namespace std;

set<pair<int, int>> visited;
vector<int> ans;
void traverse(int i, int j, const vector<vector<int>> &v) {
  if (visited.find({i, j}) != visited.end()) return;
  if (i >= v.size() || j >= v[0].size()) return;
  if (i < 0 || j < 0) return;
  ans.push_back(v[i][j]);
  visited.insert({i, j});
  traverse(i + 1, j, v);
  traverse(i, j + 1, v);
  traverse(i - 1, j, v);
  traverse(i, j + 1, v);
}
std::vector<int> snail(const std::vector<std::vector<int>> &v) {
  int i = 0, j = 0;
  ans.push_back(v[i][j]);
  visited.insert({i, j});
  traverse(i + 1, j, v);
  return ans;
}
