#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int islandPerimeter(vector<vector<int>>& grid) {
    if(grid.empty()) return 0;
    int n = grid.size(), m = grid[0].size();
    int r = 0;
    vector<pair<int, int>> dir{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    for(int i = 0; i < n; ++i) {
      for(int j = 0; j < m; ++j) {
        if(grid[i][j] == 1) {
          grid[i][j] = -1;
          for(auto [dx, dy]: dir) {
            if((0 <= i+dx) and (i+dx < n) and (0 <= j+dy) and (j+dy < m)) {
             if(grid[i+dx][j+dy] == 0) {
                ++r;
             }
            } else {
              ++r;
            }
          } 
        }
      }
    }
    return r;
  }
};

int main() {

  return 0;
}

