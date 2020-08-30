#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  TreeNode* pre = nullptr;
  void flat(TreeNode* n) {
    if(n == nullptr) {
      return;
    }
    
    TreeNode* left = n->left;
    TreeNode* right = n->right;
    n->left = nullptr;
    n->right = nullptr;
    
    if(pre) {
      pre->right = n;
    }
    pre = n;
    
    flat(left);
    flat(right);
  }
  void flatten(TreeNode* n) {
    flat(n);
  }
};


int main() {

  return 0;
}

