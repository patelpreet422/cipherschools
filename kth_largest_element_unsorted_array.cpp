#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  int partition(vector<int>& nums, int l, int h) {
    int ll = l;
    int pivot = nums[h];
    for(int i = l; i < h; ++i) {
      if(nums[i] < pivot) {
        swap(nums[ll++], nums[i]);
      }
    }
    swap(nums[ll], nums[h]);
    return ll;
  }
  
  int quick_select(vector<int>& nums, int l, int h, int k) {
    while(l <= h) {
      int p = partition(nums, l, h);
      if(p == k) {
        return nums[p];
      }
      if(k < p) {
        h = p - 1;
      } else {
        l = p + 1;
      }
    }
    return -1;
  }
  
  int findKthLargest(vector<int>& nums, int k) {
    return quick_select(nums, 0, nums.size()-1, nums.size()-k);
  }
};


int main() {

  return 0;
}

