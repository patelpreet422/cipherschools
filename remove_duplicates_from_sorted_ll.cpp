#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode* deleteDuplicates(ListNode* head) {  
    ListNode* oh = head;
    while(head) {
      ListNode* curr = head->next;
      while(curr and curr->val == head->val) {
        curr = curr->next;
      }
      head->next = curr;
      head = head->next;
    }
    return oh;
  }
};

int main() {

  return 0;
}

