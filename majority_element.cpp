#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  
  int partition(vector<int>& v, int l, int h) {
    int pivot = v[h];
    int ll = l;
    for(int i = l; i < h; ++i) {
      if(v[i] < pivot) {
        swap(v[ll++], v[i]);
      }
    }
    swap(v[ll], v[h]);
    return ll;
  } 
  
  int select(vector<int>& v, int l, int h, int k) {
    while(l <= h) {
      int m = partition(v, l, h);
      if(m == k) {
        return v[m];
      }
      if(k < m) {
        h = m - 1;
      } else {
        l = m + 1;
      }
    }
    return v[0];
  }
  
  int majorityElement(vector<int>& nums) {
    return select(nums, 0, nums.size() - 1, nums.size()/2);    
  }
};

int main() {

  return 0;
}

