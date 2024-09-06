class Solution {
public:
    bool sym(TreeNode * node1, TreeNode * node2){
     if(node1 == NULL || node2 == NULL){
        return node1== node2;
     }
     if(node1->val != node2->val){
        return false;
     }
     return sym(node1->left, node2->right)&& sym(node1->right, node2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return (root == NULL || sym(root->left, root->right) );
       
       

    }

};
