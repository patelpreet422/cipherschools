#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(!root)
      return nullptr;
    while(root != nullptr) {
      if(p->val < root->val and q->val < root->val) {
        root = root->left;
      } else if(p->val > root->val and q->val > root->val) {
        root = root->right;
      } else {
        return root;
      }
    }    
    return nullptr;
  }
};

int main() {

  return 0;
}

