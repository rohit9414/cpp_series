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

    ListNode* merge(ListNode* head1, ListNode* head2)
    {   if(head1==NULL || head2==NULL)return NULL;
        ListNode dummy;
        ListNode* temp = &dummy;

        while(head1 && head2)
        {
            if(head1->val <= head2->val)
            {
                temp->next = head1;
                head1 = head1->next;
            }
            else
            {
                temp->next = head2;
                head2 = head2->next;
            }

            temp = temp->next;
        }

        if(head1)
        {
            temp->next = head1;
        }
        else
        {
            temp->next = head2;
        }

        return dummy.next;
    }

    ListNode* middle(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while(fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = NULL;

        return slow;
    }

    ListNode* sortList(ListNode* head)
    {
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* mid = middle(head);

        head = sortList(head);
        mid = sortList(mid);

        return merge(head, mid);
    }
};