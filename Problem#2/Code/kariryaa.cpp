/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry = 0;
        ListNode* ans = NULL;
        int sum = 0;
        ListNode* ptr;
        
        while(l1 != NULL && l2 != NULL)
        {
            
            sum = l1->val + l2->val + carry;
            carry = sum/10;
            sum%=10;
            
            
            if(ans == NULL)
            {
                ans = new ListNode(sum);
                ptr = ans;
            }
            else
            {
                ans->next = new ListNode(sum);
                ans = ans->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        if(l2!=NULL)
            l1=l2;
        while(l1 != NULL)
        {
            sum = l1->val + carry;
            carry = sum/10;
            sum%=10;
            ans->next = new ListNode(sum);
            ans = ans->next;
            l1=l1->next;
        }
        if(carry)
        {
            ans->next = new ListNode(carry);
        }
        return ptr;
    }
};