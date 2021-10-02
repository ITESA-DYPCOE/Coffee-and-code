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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        if(temp==NULL || temp->next==NULL)
            return head;
        ListNode* newnode;
        while(temp!=NULL && temp->next!=NULL)
        {
            newnode=temp;
            if(newnode->val==temp->next->val)
            {
                ListNode* t=temp->next;
                newnode->next=temp->next->next;
                delete(t);
            }
            else
            {
                newnode=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};
