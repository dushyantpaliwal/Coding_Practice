class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        queue<pair<Node*, int>> q;
        map<int, int>mp;
        
        q.push({root,0});
        vector<int>ans;
        while(!q.empty()){
            // int s = q.size();
            // for(int i = 0; i < s; i++){
               Node * f = q.front().first;
               int line = q.front().second;
               mp[line] = f->data;
               q.pop();
               
               if(f->left != NULL){
                  q.push({f->left, line-1});
              }
                if(f->right != NULL){
                  q.push({f->right,line+1});
              }
        }
          for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
