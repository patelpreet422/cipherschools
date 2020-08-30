#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode* removeElements(ListNode* head, int val) {
    if(head == nullptr) {
      return nullptr;
    }
    ListNode* dummy = new ListNode(0);
    ListNode* last = dummy;
    while(head) {
      while(head and head->val == val) {
        head = head->next;
      }
      
      last->next = head;
      last = last->next;
      if(head) head = head->next;
    }
    return dummy->next;
  }
};

int main() {

  return 0;
}

