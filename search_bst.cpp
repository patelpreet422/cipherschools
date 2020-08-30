#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  TreeNode* searchBST(TreeNode* root, int val) {
    if(root == nullptr) {
      return nullptr;
    }
    while (root != nullptr) {
      if (root->val == val) {
        return root;
      }
      if (val < root->val) {
        root = root->left;
      } else {
        root = root->right;
      }
    }
    return nullptr;
  }
};

int main() {

  return 0;
}

