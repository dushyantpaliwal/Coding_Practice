class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
         
        vector<vector<int>>ans;
         vector<int>ans2;
        if(root == NULL){
            return {};
        }
        if(root->left == NULL && root->right == NULL){
            return {{root->val}};
        }
        
        while(q.size()>1){
           TreeNode*front = q.front();
           q.pop();
           if(front == NULL){
             ans.push_back(ans2);
             q.push(NULL);
            ans2.clear();
           }
           else{
               ans2.push_back(front->val);
               if(front->left != NULL){
                   q.push(front->left);
               }
               if(front->right != NULL){
                   q.push(front->right);
               }
               if(q.size()==1)ans.push_back(ans2);
           }
        }
        return ans;
    }
};
