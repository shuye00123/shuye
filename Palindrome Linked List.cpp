//
//  aa.cpp
//  Excel Sheet Column Number
//
//  Created by shuye on 15/8/27.
//  Copyright (c) 2015年 shuye. All rights reserved.
//

#include <iostream>


  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL)
        {
            return true;
        }
        ListNode *quick = head;
        ListNode *slow = head;
        while (quick->next && quick->next->next)
        {
            quick  = quick->next->next;
            slow = slow->next;
        }
        ListNode *left = head;
        ListNode *right = revert(slow);
        while (left != NULL)
        {
            if (left->val != right->val)
            {
                return false;
            }
            left = left->next;
            right = right->next;
        }
        return true;
    }
    ListNode* revert(ListNode *head)
    {
        ListNode *p = head->next;
        ListNode *q = head;
        while (p != NULL)
        {
            ListNode *r = p->next;
            p->next = q;
            q = p;
            p = r;
        }
        
        head->next = NULL;
        return q;
    }
    
};