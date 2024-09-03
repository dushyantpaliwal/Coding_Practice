class Solution {
public:
int max_parth(TreeNode* node, int &maxi ){
    if(node == NULL)return 0;
         int left = max(0,max_parth(node->left, maxi));
        int right = max(0, max_parth(node->right, maxi));
        maxi = max(maxi, right+left+node->val);
        return max(left, right)+node->val;
}
    int maxPathSum(TreeNode* root) {
          int maxi = INT_MIN;
        max_parth(root ,maxi);
        return maxi;
    }
};
