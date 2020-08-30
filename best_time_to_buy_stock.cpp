#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    if (prices.empty()) {
      return 0;
    }
    int mx = 0;
    int mi = prices[0];
    int n = prices.size();
    for (int i = 1; i < n; ++i) {
      mx = max(mx, prices[i] - mi);
      if (prices[i] < mi) {
        mi = prices[i];
      }
    }
    return mx;
  }
};

int main() {

  return 0;
}

