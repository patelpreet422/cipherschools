#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode *swapPairs(ListNode *head) {
    if (head == nullptr or head->next == nullptr) {
      return head;
    }

    ListNode *a = head;
    ListNode *b = head->next;
    ListNode *prev = nullptr;

    while (a and a->next) {
      ListNode *an = nullptr;

      if (a) {
        b = a->next;
      }

      if (a->next) {
        an = a->next->next;
      }

      a->next = an;
      if (prev) {
        prev->next = b;
      } else {
        head = b;
      }

      if (b) {
        b->next = a;
      }

      prev = a;

      a = an;
    }
    return head;
  }
};

int main() {

  return 0;
}

