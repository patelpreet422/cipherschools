#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  vector<vector<int>> memo;
  int target = 0;
  int solve(vector<int> &nums, int t, int i) {
    if (t == target and i == nums.size())
      return 1;
    if (i >= nums.size())
      return 0;
    if (memo[i][1000 + t] != -1)
      return memo[i][1000 + t];
    int a = solve(nums, t - nums[i], i + 1);
    int b = solve(nums, t + nums[i], i + 1);
    memo[i][1000 + t] = a + b;
    return memo[i][1000 + t];
  }

  int findTargetSumWays(vector<int> &nums, int S) {
    if (nums.empty())
      return 0;
    if (nums.size() == 1)
      return (nums[0] == S or nums[0] == -S);
    memo.assign(nums.size(), vector<int>(2002, -1));
    target = S;
    return solve(nums, 0, 0);
  }
};

int main() {

  return 0;
}

