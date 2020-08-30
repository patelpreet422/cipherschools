#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  void rotate(vector<int>& nums, int k) {
    k %= nums.size();
    reverse(begin(nums), end(nums));
    reverse(begin(nums), begin(nums)+k);
    reverse(begin(nums)+k, end(nums));
  }
};

int main() {

  return 0;
}

