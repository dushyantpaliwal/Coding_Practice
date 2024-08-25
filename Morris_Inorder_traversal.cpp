vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        TreeNode*curr = root;
        while(curr != NULL){
            if(curr->left != NULL ){
                TreeNode*temp = curr->left;
                while(temp->right != NULL && temp->right != curr){
                    temp = temp->right;
                }
                if(temp->right == NULL){
                    temp->right = curr;
                    curr= curr->left;
                }
                else{
                    temp->right = NULL;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
        
                else{
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
                   }
            return ans;
             }
};
