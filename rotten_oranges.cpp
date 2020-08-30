#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int orangesRotting(vector<vector<int>>& grid) {
    queue<tuple<int, int, int>> q;
    int n = grid.size(), m = grid[0].size();
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < m; ++j) {
        if(grid[i][j] == 2) {
          q.push(make_tuple(i, j, 0));
        }
      }
    }
    
    vector<pair<int, int>> dir{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int mt = INT_MIN;
    while(!q.empty()) {
      auto [x, y, b] = q.front();
      q.pop();
      mt = max(mt, b);
      for(auto [dx, dy]: dir) {
        if((0 <= x+dx) and (x+dx < n) and (0 <= y+dy) and (y+dy < m) and (grid[x+dx][y+dy] == 1)) {
          grid[x+dx][y+dy] = 2;
          q.push(make_tuple(x+dx, y+dy, b+1));
        }
      }
    }
    
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < m ; ++j) {
        if(grid[i][j] == 1) {
          return -1;
        }
      }
    }
    return mt == INT_MIN? 0: mt;
  }
};

int main() {

  return 0;
}

