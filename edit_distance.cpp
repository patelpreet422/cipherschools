#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int minDistance(string a, string b) {
    int m = a.size(), n = b.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    for (int i = 0; i <= n; i++) {
      dp[0][i] = i;
    }

    for (int i = 0; i <= m; i++) {
      dp[i][0] = i;
    }

    for (int i = 1; i <= m; ++i) {
      for (int j = 1; j <= n; ++j) {
        if (a[i - 1] == b[j - 1])
          dp[i][j] = dp[i - 1][j - 1];
        else
          dp[i][j] = min(min(dp[i][j - 1] + 1, dp[i - 1][j] + 1), dp[i - 1][j - 1] + 1);
      }
    }
    return dp[m][n];
  }
};

int main() {

  return 0;
}

