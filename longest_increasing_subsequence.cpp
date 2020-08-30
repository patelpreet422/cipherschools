#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int lengthOfLIS(vector<int> &nums) {
    if (nums.empty())
      return 0;
    vector<int> dp(nums.size());
    dp[0] = 1;
    for (int i = 1; i < nums.size(); ++i) {
      int a = 1;
      for (int j = 0; j < i; ++j) {
        if (nums[j] < nums[i])
          a = max(a, 1 + dp[j]);
      }
      dp[i] = a;
    }
    return *max_element(begin(dp), end(dp));
  }
};

int main() {

  return 0;
}

