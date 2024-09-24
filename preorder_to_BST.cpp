lass Solution {
public:
// 
 TreeNode* helper(vector<int>& preorder, int& index, int upperBound) {
        if (index == preorder.size() || preorder[index] > upperBound) {
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[index]);
        index++;  // Move to the next element in preorder

        // Recursively construct the left subtree with upper bound as root->val
        root->left = helper(preorder, index, root->val);
        // Recursively construct the right subtree with upper bound as given
        root->right = helper(preorder, index, upperBound);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return helper(preorder, index, INT_MAX);
    }
};
