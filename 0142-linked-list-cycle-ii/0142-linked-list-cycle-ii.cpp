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
    ListNode *begin(ListNode *head)
    {
        ListNode *slow=head,*fast=head,*temp=head;
        while(slow)
        {   if(!(fast&&fast->next))return NULL;
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)break;
        }
        while(temp!=slow)
        {
            temp=temp->next;
            slow=slow->next;
        }
        return temp;

    }
    ListNode *detectCycle(ListNode *head) {
    return begin(head);    
    }
};