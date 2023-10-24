class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode*temp = head;
        if( head == NULL || head->next == NULL)return head;
        ListNode*temp2 = head->next;
        ListNode*curr = temp2;
       while(temp->next != NULL && temp->next->next != NULL){
            curr = temp->next;
           temp->next = temp->next->next;
           temp = temp->next;
           curr->next = temp->next;
       } 
       temp->next=  temp2;
       return head;
    }
};
