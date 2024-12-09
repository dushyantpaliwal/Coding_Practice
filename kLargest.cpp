class Solution {
  public:
  int reverseinorder(Node * root, int &counter, int k, int &kLargest){
      if(!root || counter >=k)return kLargest;
      reverseinorder(root->right,counter, k ,kLargest );
      counter++;
      if(counter == k){
          kLargest = root->data;
          return kLargest;
      }
      reverseinorder(root->left,counter, k ,kLargest );
      return kLargest;
  }
    int kthLargest(Node *root, int k) {
        // Your code here
        int kLargest = INT_MAX;
        int counter= 0;
        return reverseinorder(root,counter, k ,kLargest );
    }
};
