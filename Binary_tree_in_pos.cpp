class Solution {
public:
TreeNode *Construct(vector<int>&inorder, vector<int>&postorder, int i, int j, int k, int l,unordered_map<int, int>&hm){
    if(i> j || k >l)return NULL;
    TreeNode* root = new TreeNode(postorder[l]);
    int idx = hm[root->val];
    int length = idx -i;
    root->left = Construct(inorder, postorder,i,idx-1, k, k+length-1,hm);
    root->right = Construct(inorder, postorder,idx+1, j, k+length, l-1, hm);
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() != postorder.size())return NULL;
        int is= 0;
        int ie = inorder.size()-1;
        int ps = 0;
        int pe = postorder.size()-1;
        unordered_map<int, int>hm;
        for(int i = 0; i < inorder.size(); i++){
            hm[inorder[i]] = i;
        }
        return Construct(inorder, postorder, is,ie,ps,pe,hm);
    }
};
