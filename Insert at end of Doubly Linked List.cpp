
Node* constructDLL(vector<int>& arr) {
    // Write your code here
     int n = arr.size();
     Node*head = new Node(arr[0]);
     Node*temp = head;
     for(int i = 1; i < n; i++){
         Node* curNode = new Node(arr[i]);
         temp->next = curNode;
         curNode->prev = temp;
         temp = temp->next;
     }
   return head;
}
