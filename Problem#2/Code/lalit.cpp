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
        
        ListNode* temp1= l1;
        ListNode* temp2 = l2;
        
        int sum = 0;
        int carry = 0;
        vector<int> res;
        
        while (temp1!=NULL && temp2!=NULL)
        {
            sum = temp1->val + temp2->val + carry;
            if (sum>=10)
            {
                carry = sum/10;
                sum = sum - 10;
            }
            else 
                carry = 0;
            
            res.push_back(sum);
            
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        if (temp1 == NULL && temp2!=NULL)
        {
            //cout<<"hello";
            while (temp2!=NULL)
            {
                //cout<<"in the while loop";
                sum = temp2->val + carry;

                if (sum>=10)
                {
                    carry = sum/10;
                    sum = sum - 10;
                }
                else 
                    carry = 0;

                res.push_back(sum);
                temp2=temp2->next;
            }

            
        }

        else if (temp1 != NULL && temp2==NULL)
        {
            while (temp1!=NULL)
            {
                sum = temp1->val + carry;

                if (sum>=10)
                {
                    carry = sum/10;
                    sum = sum - 10;
                }
                else 
                    carry = 0;

                res.push_back(sum);
                temp1=temp1->next;
            }

            
        }

        if (carry != 0)
            res.push_back(carry);

        // display the result vector
        // for (int i=0; i<res.size(); i++)
        //     cout<<res[i]<<" ";

        // put the elements in linked list from the vector res.

        struct ListNode* head = (ListNode*)malloc(sizeof(ListNode));
        int len_res = res.size();
        head->val = res[len_res-1];
        head->next = NULL;

        if (len_res == 1)
            return head;

        for (int i=len_res-2; i>=0; i--)
        {
            struct ListNode*  temp= (ListNode*)malloc(sizeof(ListNode));
            temp->val = res[i];
            temp->next = head;
            head = temp;
        }

        return head;
    }
};
