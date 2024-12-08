class Solution {
public:
bool valid(TreeNode*root, long long minVal = LLONG_MIN, long long maxVal = LLONG_MAX){
      if(root == NULL)return true;
        if(root->val >= maxVal || root->val <= minVal){
            return false;
        }
        return valid(root->left, minVal, root->val)&& valid(root->right, root->val, maxVal);
}
    bool isValidBST(TreeNode* root) {
            return valid(root);
    }
};
