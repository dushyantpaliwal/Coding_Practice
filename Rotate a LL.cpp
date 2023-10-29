class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*curr= head;
        if(head == NULL || head->next == NULL || k==0)return head;
        int count = 1;
        while(curr->next != NULL){
            curr = curr->next;
            count++;
        }
      //  if(count == k)return head;
        int num = count-k-1;
        while(num < 0){
           num += count;
        }
        ListNode*temp = head;
        while(num>0){
            temp = temp->next;
            num--;
            
        }
       if(temp->next == NULL){
           return head;
       }
        else{

        ListNode* newhead = temp->next;
        temp->next = NULL;
        curr->next = head;

        return newhead;
        }
        
    }
};
