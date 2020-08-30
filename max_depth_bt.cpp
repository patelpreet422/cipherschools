#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  int d = 0;
  int solve(TreeNode *n) {
    if (n == nullptr) {
      return 0;
    }
    int l = solve(n->left) + 1;
    int r = solve(n->right) + 1;
    d = max(d, max(l, r));
    return max(l, r);
  }
  int maxDepth(TreeNode *root) {
    solve(root);
    return d;
  }
};

int main() {

  return 0;
}

