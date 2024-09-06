class Solution {   
public:
     TreeNode* prev =  NULL;
    void flatten(TreeNode* root) {
        if(root == NULL)return;
        TreeNode* templeft = root->left;
        TreeNode* tempright = root->right;
        root->left = NULL;
        flatten(templeft);
        flatten(tempright);
        root->right = templeft;
        TreeNode* curr = root;
        while(curr->right != NULL){
            curr = curr->right;
        }
        curr->right = tempright;

    }
};
