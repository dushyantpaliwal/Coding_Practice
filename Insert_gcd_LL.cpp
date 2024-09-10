int gcd(int a, int b){
        if(a== 0 )return b;
        if(b == 0)return a;
        if(a>=b)return gcd(a%b, b);
        return gcd(b%a, a);
   }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        // ListNode*temp1 = curr
        
        while(curr->next != NULL){
             ListNode* temp1 = curr;
              ListNode* temp2 = curr->next;
             int a =  gcd(curr->val, curr->next->val);
              ListNode* middle = new ListNode(a);
              temp1->next = middle;
              middle->next = temp2;
              curr = temp2;
        }
        return head;
    }
};
