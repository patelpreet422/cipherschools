#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int res = 0;
  int height(TreeNode* n) {
    if(n == nullptr) {
      return -1;
    }
    int lh = height(n->left)+1;
    int rh = height(n->right)+1;
    res = max(res, lh+rh);
    // cout << "Height of " << n->val << ": " << max(lh, rh) << '\n';
    return max(lh, rh);
  }
  int diameterOfBinaryTree(TreeNode* root) {
    height(root);
    return res;
  }
};

int main() {

  return 0;
}

