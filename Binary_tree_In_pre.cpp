class Solution {
public:

   TreeNode* Construct(vector<int>& preorder, vector<int>& inorder, int i,int j, int k, int  l, unordered_map<int, int>&hm){
       if(i>j || k > l)return NULL;
       int idx = hm[preorder[k]]; ;
    //    if (hm.find(preorder[k]) != hm.end()) {
    //       idx =hm[preorder[k]];
    //     }
        int length = idx -i;
        TreeNode *root = new TreeNode(preorder[k]);
        root->left = Construct(preorder, inorder,i,idx-1, k+1,k+length, hm );
        root->right = Construct(preorder, inorder,idx+1,j, k+length+1,l, hm );
        return root;
 
   }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       int is = 0;
       int ps = 0;
       int ie = inorder.size()-1; 
       int pe = preorder.size()-1;
       unordered_map<int, int>hm;
       for(int i =0; i < inorder.size(); i++){
            hm[inorder[i]] = i;
       }
    return Construct(preorder, inorder, is, ie, ps,pe,hm);
    }
};
