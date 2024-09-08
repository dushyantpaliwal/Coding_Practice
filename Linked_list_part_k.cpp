class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = 0;
        ListNode* temp = head;

        while(temp) {
            len++;
            temp = temp->next;
        }

        int partSize = len / k;
        int extra = len % k;

        vector<ListNode*> ans(k, nullptr);

        temp = head;

        for(int i = 0; i < k && temp; i++) {
            ans[i] = temp;

            int size = partSize + ((extra > 0) ? 1 : 0);

            for(int j = 0; j < size-1; j++) {
                if(temp) {
                    temp = temp->next;
                }
            }

            if(temp) {
                ListNode* nextPart = temp->next;
                temp->next = nullptr;
                temp = nextPart;
            }

            extra--;
        }

        return ans;
    }
};

 //vector<ListNode*> splitListToParts(ListNode* head, int k) {
//         int size = 0;
//         vector<ListNode*>ans;
//         ListNode* temp = head;
//         while(temp != NULL){
//             temp = temp->next;
//             size++;
//         }
//         if(size<=k){
//             while(head!= NULL){
//                 ans.push_back(head);
//                 head = head->next;
//             }
//         }
//         else{
            
//             int m = size/k;
//            ListNode*rr = head;
//            while(head->next!= NULL){
            
//             for(int i = 0; i < m; i++){
//               head = head->next;
//               size--;
//               if(head->next ==NULL)break;
//             }
//               if(head->next ==NULL)break;
//             temp = head;
//             head = head->next;
//             temp->next = NULL;
//               ans.push_back(rr);
//         }
//         }
//         return ans;
//     }
// };
