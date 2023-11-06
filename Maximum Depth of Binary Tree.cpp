class Solution {
public:
 
    int maxDepth(TreeNode* root) {
        if(root == NULL)return 0;
        int depth1 = maxDepth(root->left)+1;
        int depth2 = maxDepth(root->right)+1;
        int ans = max(depth1, depth2);
        return ans;
    }

};
