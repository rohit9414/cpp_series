/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode*result(ListNode*left,ListNode*right)
    {   
        ListNode*first=left,*second=right;
        int sum=0,rm=0,qs=0;
        while(first->next && second->next)
        {
            sum=first->val+second->val;
            sum=sum+rm;
            rm=sum/10;
            qs=sum%10;
            first->val=qs;
            first=first->next;
            second=second->next;
        }
        if(!(second->next)&& first->next)
        {
            sum=first->val+second->val;
            sum=sum+rm;
            rm=sum/10;
            qs=sum%10;
            first->val=qs;
            first=first->next;
            
            while(rm&&first->next)
            {
            sum=first->val+rm;
            rm=sum/10;
            qs=sum%10;
            first->val=qs;
            first=first->next;
            }
            sum=first->val+rm;
            rm=sum/10;
            qs=sum%10;
            first->val=qs;
            
            if(rm)
            {
                ListNode*temp=new ListNode(0);
                temp->val=rm;
                first->next=temp;
            }
            return left;

        }else if(!(first->next)&& !(second->next))
        {
            sum=first->val+second->val;
            sum=sum+rm;
            rm=sum/10;
            qs=sum%10;
            first->val=qs;
            if(rm)
            {
                ListNode*temp=new ListNode(0);
                temp->val=rm;
                first->next=temp;
            }
            return left;

        }
        else
        {
           sum=first->val+second->val;
           sum=sum+rm;
           rm=sum/10;
           qs=sum%10;
           first->val=qs;
           first->next=second->next;
           first=first->next;
           while(first->next&&rm)
           {
            sum=first->val+rm;
            rm=sum/10;
            qs=sum%10;
            first->val=qs;
            first=first->next;
           }
            sum=first->val+rm;
            rm=sum/10;
            qs=sum%10;
            first->val=qs;
           if(rm)
            {
                ListNode*temp=new ListNode(0);
                temp->val=rm;
                first->next=temp;
            }
           return left;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return result(l1,l2);
    }
};