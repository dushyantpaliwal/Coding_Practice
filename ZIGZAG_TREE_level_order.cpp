class Solution {
public:
class Info{
    public:
    TreeNode * node;
    int l ;
};
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL)return {};
        queue<Info>q;
        q.push({root,1});
        vector<vector<int>>ans;
       int j = 1;
        while(!q.empty()){
            int s= q.size();
             vector<int>ans2;
            for(int i = 0; i < s; i++){
                 TreeNode * f= q.front().node;
                    ans2.push_back(f->val);
                 if(f->left !=  NULL){
                    q.push(Info(f->left, j+1));
                 }
                 if(f->right !=  NULL){
                    q.push(Info(f->right,j+1));
                 }
                 q.pop();
            }
            
            // else{
            //     for(int i = 0; i < s; i++){
            //      TreeNode * f= q.front().node;
            //         ans2.push_back(f->val);
            //      if(f->right !=  NULL){
            //         q.push(Info(f->right, j+1));
            //      }
            //      if(f->left !=  NULL){
            //         q.push(Info(f->left, j+1));
            //      }
            //      q.pop();
            // }
            // }
            if(j%2 == 0){
           reverse(ans2.begin(), ans2.end());
            ans.push_back(ans2);
            }
            else{
               ans.push_back(ans2); 
            }
            j++;
        }
        return ans;
    }
};
