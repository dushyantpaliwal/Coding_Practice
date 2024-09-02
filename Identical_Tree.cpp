class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)return true;
        else if(p == NULL && q != NULL)return false;
       else if(p != NULL && q == NULL)return false;
       else if(p->val != q->val)return false;
        if(isSameTree(p->left, q->left)== true && isSameTree(p->right, q->right) == true){
            return true; 
        }
        return false;
    }
};