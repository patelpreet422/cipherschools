#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  bool hasCycle(ListNode *head) {
    if(head == nullptr or head->next == nullptr) {
      return false;
    }
    ListNode* s = head;
    ListNode* f = head;
    while(f and f->next) {
      s = s->next;
      f = f->next->next;
      if(f == s) {
        return true;
      }
    }
    return false;
  }
};

int main() {

  return 0;
}

