lass Solution {
public:
// int length(ListNode*head){
//     int ans = 1;
//     while(head->next != NULL){
//         head = head->next;
//         ans++;
//     }
//     return ans;
// }
//     ListNode* reverseKGroup(ListNode* head, int k) {
//        if(head== NULL)return NULL;
//        ListNode*prev = NULL;;
//        ListNode*curr= head;
//        ListNode*temp = NULL ;
//        int count = 0;
//        ListNode*dummy = head;
       
//        while(curr != NULL&& count < k && length(head)>= k){
//            temp = curr->next;
//            curr->next= prev;
//            prev = curr;
//            curr = temp;
//            count++;
//        }
//        if(length(head)< k && head!= NULL){
//            dummy->next = curr;

//        }
//        else{
//        dummy->next = reverseKGroup( curr, k);
//        }
//        return prev;
       
ListNode* reverseKGroup(ListNode* head, int k) {
    int count = 0;
    ListNode* curr = head;

    // Check if there are at least k nodes left in the current group
    while (count < k && curr != NULL) {
        curr = curr->next;
        count++;
    }

    // If there are at least k nodes in the current group, reverse them
    if (count == k) {
        ListNode* prev = NULL;
        curr = head;
        for (int i = 0; i < k; i++) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        // Connect the reversed group to the next group
        head->next = reverseKGroup(curr, k);
        return prev;
    }

    // If there are fewer than k nodes in the current group, don't reverse and return 'head'
    return head;




    }
};
