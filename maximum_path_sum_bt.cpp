#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  bool all_neg = true;
  int ln = INT_MIN;
  int res = INT_MIN;
  int solve(TreeNode* n) {
    if(n == nullptr) {
      return 0;
    }
    
    all_neg &= (n->val < 0);
    if(n->val < 0) {
      ln = max(ln, n->val);
    }
    
    int rs = solve(n->right);
    int ls = solve(n->left);
    
    res = max({res, max(rs, ls)+n->val, rs+ls+n->val, n->val});
    
    return max(max(rs, ls)+n->val, n->val);
  }
  
  int maxPathSum(TreeNode* root) {
    solve(root);
    return all_neg? ln: res;
  }
};

int main() {

  return 0;
}

