#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode* middleNode(ListNode* head) {
    if(head == nullptr or head->next == nullptr) {
      return head;
    }     
    
    ListNode* s = head;
    ListNode* f = head;
    while(f and f->next) {
      s = s->next;
      f = f->next->next;
    }
    
    return s;
  }
};

int main() {

  return 0;
}

