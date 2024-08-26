class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        queue<pair<Node*, int>>q;
        map<int, int>mp;
        vector<int>ans;
        //Your code here
        q.push({root, 0});
        while(!q.empty()){
            Node* f = q.front().first;
            int line  = q.front().second;
            if(mp.find(line)==mp.end()){
                mp[line] = f->data;
            }
            q.pop();
            if(f->left != NULL){
                q.push({f->left,line-1});
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
