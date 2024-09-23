class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *temp = root;
        if(temp == NULL)return NULL;
        if(val== temp->val)return temp;
        if(val < temp->val)return searchBST(temp->left, val);
        return searchBST(temp->right, val);

    }
};
