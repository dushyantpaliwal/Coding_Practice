class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL)return true;
        if(height(root) == -1) return false;
        return true;
    }
    int height(TreeNode*root){
        if(root == NULL)return 0;
        int left = height(root->left);
        int right = height(root->right);
        if(left == -1 || right == -1 ||abs(left-right) >1)return -1;
        return max(left, right) +1;
    }
};
