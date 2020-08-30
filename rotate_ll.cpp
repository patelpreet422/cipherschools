#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  int length(ListNode* n) {
    int r = 0;
    while(n) {
      n = n->next;
      ++r;
    }
    return r;
  }
  
  ListNode* rotateRight(ListNode* head, int k) {
    if(head == nullptr or head->next == nullptr) {
      return head;
    }     
    
    int n = length(head);
    k = k%n;
    k = n - k;
    
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while(k) {
      prev = curr;
      curr = curr->next;
      --k;
    }
    
    ListNode* nh = curr;
    
    if(prev) {
      prev->next = nullptr;
    }
    if(curr) {
      while(curr->next) {
        curr = curr->next;
      }
      curr->next = head;
    }
    return nh != nullptr ? nh: head;
  }
};

int main() {

  return 0;
}

