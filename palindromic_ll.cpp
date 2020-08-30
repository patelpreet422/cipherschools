#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode *mid(ListNode *n) {
    if (n == nullptr or n->next == nullptr) {
      return n;
    }
    ListNode *prev = nullptr;
    ListNode *s = n;
    ListNode *f = n;

    while (f and f->next) {
      prev = s;
      s = s->next;
      f = f->next->next;
    }

    if (prev) {
      prev->next = nullptr;
    }

    return s;
  }

  ListNode *reverse(ListNode *n) {
    if (n == nullptr or n->next == nullptr) {
      return n;
    }
    ListNode *last = n;
    n = n->next;
    last->next = nullptr;
    while (n) {
      ListNode *t = n->next;
      n->next = last;
      last = n;
      n = t;
    }
    return last;
  }

  bool isPalindrome(ListNode *head) {
    ListNode *m = mid(head);

    m = reverse(m);
    // while(m) {
    //   cout << m->val << ' ';
    //   m = m->next;
    // }

    while (head) {
      if (m->val != head->val) {
        return false;
      }
      m = m->next;
      head = head->next;
    }
    return true;
  }
};

int main() {

  return 0;
}

