#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  bool hasPathSum(TreeNode* root, int sum) {
    if(!root) return false;
    stack<pair<TreeNode*, int>> stk;
    stk.push({root, sum});
    while(!stk.empty()) {
      auto [top, s] = stk.top();
      auto [val, left, right] = *top;
      stk.pop();
      if(left == nullptr and right == nullptr) {
        if(s - val == 0) return true;
      }
      if(left) {
        stk.push({left, s - val});
      }
      if(right) {
        stk.push({right, s - val});
      }
    }
    return false; 
  }
};

int main() {

  return 0;
}

