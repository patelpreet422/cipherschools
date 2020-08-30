#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int tilt = 0;
  int solve(TreeNode* n) {
    if(n == nullptr) {
      return 0;
    }
    
    int ls = solve(n->left);
    int rs = solve(n->right);
    
    tilt += abs(ls - rs);
    
    return ls+rs+n->val;
  }
  int findTilt(TreeNode* n) {
    solve(n);
    return tilt;
  }
};

using ll = long long;
int main() {

  return 0;
}

