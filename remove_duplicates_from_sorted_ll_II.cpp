#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode* deleteDuplicates(ListNode* head) {
    if(head == nullptr or head->next == nullptr) {
      return head;
    }
    ListNode* dummy = new ListNode();
    ListNode* last = dummy;
    
    while(head) {
      ListNode* nxt = head->next;
      bool repeat = false;
      while(nxt and nxt->val == head->val) {
        repeat = true;
        nxt = nxt->next;
      }
      if(!repeat) {
        last->next = head;
        head->next = nullptr;
        last = last->next;
      }
      head = nxt;
    }
    
    return dummy->next;
  }
};

int main() {

  return 0;
}

