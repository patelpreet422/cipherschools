#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  TreeNode* insertIntoBST(TreeNode* root, int val) {
    if(root == nullptr) {
      return new TreeNode(val);
    }
    
    TreeNode* prev = nullptr;
    TreeNode* curr = root;
    while(curr) {
      prev = curr;
      if(val < curr->val) {        
        curr = curr->left;
      } else {
        curr = curr->right;
      }
    }
    
    if(val < prev->val) {
      prev->left = new TreeNode(val);
    } else {
      prev->right = new TreeNode(val);
    }
    
    return root;
  }
};

int main() {

  return 0;
}

