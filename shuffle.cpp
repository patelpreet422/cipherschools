#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

/* https://leetcode.com/problems/shuffle-the-array/discuss/675956/In-Place-O(n)-Time-O(1)-Space-With-Explanation-and-Analysis
 */

// this can be optimised
class Solution {
public:
  vector<int> shuffle(vector<int> &nums, int n) {
    vector<int> res(2 * n);
    int i = 0;
    int l = 0;
    int h = n;
    while (i < 2 * n) {
      if (i & 1) {
        res[i++] = nums[h++];
      } else {
        res[i++] = nums[l++];
      }
    }
    return res;
  }
};

int main() {

  return 0;
}

