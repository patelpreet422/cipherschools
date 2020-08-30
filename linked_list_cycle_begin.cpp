#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode *detectCycle(ListNode *head) {
    if(head == nullptr or head->next == nullptr) {
      return nullptr;
    }
    
    ListNode* s = head;
    ListNode* f = head;
    while(f and f->next) {
      s = s->next;
      f = f->next->next;
      if(s == f) {
        break;
      }
    }
    if(f == nullptr or f->next == nullptr) {
      return nullptr;
    }
    f = head;
    while(s != f) {
      s = s->next;
      f = f->next;
    }
    return s;
  }
};

int main() {

  return 0;
}

