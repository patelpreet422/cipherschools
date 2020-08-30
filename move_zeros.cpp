#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  void moveZeroes(vector<int>& nums) {
    int l = 0, i = 0, h = nums.size() - 1;
    while(i <= h) {
      if(nums[i] != 0) {
        swap(nums[i], nums[l++]);
      }
      ++i;
    }
  }
};

/*

         i 
1 3 12 0 0(h)
    l

*/


int main() {

  return 0;
}

