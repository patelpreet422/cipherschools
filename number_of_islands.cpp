#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int numIslands(vector<vector<char>>& grid) {
    if(grid.empty()) return 0;
    int c = 0;
    vector<pair<int, int>> dir{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int n = grid.size(), m = grid[0].size();
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < m; ++j) {
        if(grid[i][j] == '1') {
          grid[i][j] = '#';
          ++c;
          stack<pair<int, int>> s;
          s.push({i, j});
          while(!s.empty()) {
            auto [x, y] = s.top();
            s.pop();
            for(auto [dx, dy]: dir) {
              if((0 <= x+dx) and (x+dx < n) and (0 <= y+dy) and (y+dy < m) and (grid[x+dx][y+dy] == '1')) {
                grid[x+dx][y+dy] = '#';
                s.push({x+dx, y+dy}); 
              }
            }
          }
        }
      }
    }
    return c;
  }
};

int main() {

  return 0;
}

