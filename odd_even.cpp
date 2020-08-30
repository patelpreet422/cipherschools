#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode* oddEvenList(ListNode* head) {
    if(head == nullptr) {
      return head;
    }
    ListNode* odd = head;
    ListNode* even = head->next;
    
    ListNode* orunner = odd;
    ListNode* erunner = even;
    
    while(erunner != nullptr and erunner->next != nullptr) {
      orunner->next = erunner->next;
      erunner->next = orunner->next->next;
      
      orunner = orunner->next;
      erunner = erunner->next;
    }
  
    orunner->next = even;
    return odd;
  }
};

/*
        o
        |
1 2 3 4 5 => 1 3 5 2 4 
      |
      r
      
        o
        |
1 2 3 4 5 6 => 1 3 5 2 4 6 
      |
      r
      
*/


int main() {

  return 0;
}

