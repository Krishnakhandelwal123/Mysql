class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head||head->next==NULL){
            return head;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};