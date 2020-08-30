#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  bool ans = false;
  int xh = -1;
  int yh = -1;
  TreeNode* xpr = nullptr;
  TreeNode* ypr = nullptr;
  
  void solve(TreeNode* n, TreeNode* p, int d, int x, int y) {
    if(n == 0) {
      return;
    }
    solve(n->left, n, d+1, x, y);
    solve(n->right, n, d+1, x, y);

    if(n->val == x) {
      xh = d;
      xpr = p;
    } else if(n->val == y) {
      yh = d;
      ypr = p;
    }
  }
  
  bool isCousins(TreeNode* root, int x, int y) {
    solve(root, nullptr, 0, x, y);
    return (xpr != ypr) and (xh == yh);
  }
};

int main() {

  return 0;
}

