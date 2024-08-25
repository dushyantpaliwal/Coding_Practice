   vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
         if (root == NULL) return {};
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
            int s2 = q.size();
            for(int i = 0; i < s2; i++){
                TreeNode* f = q.front();
                q.pop();
                if(i == s2-1)ans.push_back(f->val);
            
                if(f->left != NULL){
                    q.push(f->left);
                }
                if(f->right != NULL){
                    q.push(f->right);
                }
            }
        }
            return ans;
        }

