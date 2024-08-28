class Solution {
  public:
  void helper(Node * root, vector<vector<int>>&ans, vector<int>&a){
      if(root == NULL)return;
      a.push_back(root->data);
      if(root->right == NULL && root->left == NULL){
          ans.push_back(a);
      }
       //we are doing the backtrack to get back the previous state
       helper(root->left, ans,a);
       helper(root->right, ans,a);
       a.pop_back();
  }
    vector<vector<int>> Paths(Node* root) {
        // code here
         vector<vector<int>>ans;
         vector<int>a;
         helper(root, ans, a);
         return ans;
     
    }
};
