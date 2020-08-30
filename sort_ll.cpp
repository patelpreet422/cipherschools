#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode* mid(ListNode* n) {
    if(n == nullptr or n->next == nullptr) {
      return n;
    }
    ListNode* prev = nullptr;
    ListNode* s = n;
    ListNode* f = n;
    while(f and f->next) {
      prev = s;
      s = s->next;
      f = f->next->next;
    }
    if(prev) {
      prev->next = nullptr;
    }
    return s;
  }
  
  ListNode* merge(ListNode* a, ListNode* b) {
    ListNode* dummy = new ListNode();
    ListNode* last = dummy;
    while(a || b) {
      if(a and b) {
        if(a->val < b->val) {
          last->next = a;
          a = a->next;
          last = last->next;
        } else {
          last->next = b;
          b = b->next;
          last = last->next;
        }
      } else if(a) {
          last->next = a;
          a = a->next;
          last = last->next;
      } else if(b) {
          last->next = b;
          b = b->next;
          last = last->next;
      }
    }
    return dummy->next;
  }
  
  ListNode* sortList(ListNode* head) {
    if(head == nullptr or head->next == nullptr) {
      return head;
    } 
    ListNode* m = mid(head);
    return merge(sortList(head), sortList(m));
  }
};

int main() {

  return 0;
}

