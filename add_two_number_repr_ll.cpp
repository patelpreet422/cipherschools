#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
    ListNode* r = new ListNode(0);
    ListNode* runner = r;
    int carry = 0;
    while(a != nullptr and b != nullptr) {
      int x = a->val;
      int y = b->val;
      int val = x+y+carry;
      carry = val/10;
      runner->next = new ListNode(val%10);
      a = a->next;
      b = b->next;
      runner = runner->next;
    }
    
    while(a != nullptr) {
      int x = a->val;
      int val = x + carry;
      carry = val/10;
      runner->next = new ListNode(val%10);
      a = a->next;
      runner = runner->next;
    } 
    
    while(b != nullptr) {
      int x = b->val;
      int val = x + carry;
      carry = val/10;
      runner->next = new ListNode(val%10);
      b = b->next;
      runner = runner->next;
    }
    
    if(carry) {
      runner->next = new ListNode(carry);
    }
    return r->next;
  }
};

int main() {

  return 0;
}

