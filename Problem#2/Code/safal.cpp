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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        ListNode* ans = NULL;
        ListNode* prev = NULL;
        
        while(l1!=NULL || l2!=NULL) {
            
            int l1Val = l1!=NULL?l1->val : 0;
            int l2Val = l2!=NULL?l2->val : 0;
            int sum = carry + l1Val + l2Val;
            ListNode *cur = new ListNode(sum%10);
            carry = sum/10;
            if(prev==NULL){
             prev=cur;
             ans=prev;
            }
            else {
             prev->next = cur;
             prev=prev->next;   
            }
            l1=l1!=NULL?l1->next:NULL;
            l2=l2!=NULL?l2->next:NULL;
        }       
        
        if(carry>0) {
            ListNode *cur = new ListNode(carry);
            prev->next = cur;
        }
        return ans;
    }
};