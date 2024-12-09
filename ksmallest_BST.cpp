class Solution {
public:

  int inorder(TreeNode*root, int &counter, int k,int  &ksmallest){
    if(!root || counter>=k)return ksmallest;
    inorder(root->left, counter, k, ksmallest);
    counter++;
    if(counter == k){
        ksmallest = root->val;
        return ksmallest;
    }
        inorder(root->right, counter, k, ksmallest);
    return ksmallest;
  }

    int kthSmallest(TreeNode* root, int k) {
         int counter =0;
         int kSmallest = INT_MIN;
        return inorder(root, counter, k,kSmallest );


    }
};
