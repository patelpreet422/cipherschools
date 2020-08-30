#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode *merge(ListNode *a, ListNode *b) {
    ListNode *dummy = new ListNode();
    ListNode *last = dummy;
    while (a || b) {
      if (a and b) {
        if (a->val < b->val) {
          last->next = a;
          a = a->next;
          last = last->next;
        } else {
          last->next = b;
          b = b->next;
          last = last->next;
        }
      } else if (a) {
        last->next = a;
        a = a->next;
        last = last->next;
      } else if (b) {
        last->next = b;
        b = b->next;
        last = last->next;
      }
    }
    return dummy->next;
  }

  ListNode *divide_and_merge(vector<ListNode *> &lists, int l, int h) {
    if (l > h) {
      return nullptr;
    }
    if (l == h) {
      return lists[l];
    }
    int m = l + (h - l) / 2;
    return merge(divide_and_merge(lists, l, m),
                 divide_and_merge(lists, m + 1, h));
  }

  ListNode *mergeKLists(vector<ListNode *> &lists) {
    return divide_and_merge(lists, 0, lists.size() - 1);
  }
};

int main() {

  return 0;
}

