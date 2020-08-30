#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* runner = dummy;
    
    while(l1 or l2) {
      if(l1 and l2) {
        if(l1->val < l2->val) {
          runner->next = l1;
          l1 = l1->next;
          runner = runner->next;
        } else{
          runner->next = l2;
          l2 =l2->next;
          runner = runner->next;
        }
      } else if(l1) {
        runner->next = l1;
        l1 = l1->next;
        runner = runner->next;
      } else if(l2) {
        runner->next = l2;
        l2 = l2->next;
        runner = runner->next;
      }
    }
    return dummy->next;
  }
};

int main() {

  return 0;
}

