#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, 0);
    dp[0] = nums[0];
    for (int i = 1; i < n; ++i) {
      dp[i] = max(nums[i], dp[i - 1] + nums[i]);
    }
    return *max_element(begin(dp), end(dp));
  }
};

int main() {

  return 0;
}

