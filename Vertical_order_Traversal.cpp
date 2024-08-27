class Solution {
public:
    class Info {
    public:
        TreeNode* node;
        int l; // Vertical level
        
        Info(TreeNode* n, int level) : node(n), l(level) {}
    };

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<int>> hm; // Maps vertical level to node values
        queue<Info> q;

        q.push(Info(root, 0));

        while (!q.empty()) {
            int size = q.size();
            map<int, vector<int>> levelMap; // Temporary map to handle same level nodes

            for (int i = 0; i < size; ++i) {
                Info f = q.front();
                q.pop();

                levelMap[f.l].push_back(f.node->val);

                if (f.node->left != NULL) {
                    q.push(Info(f.node->left, f.l - 1));
                }
                if (f.node->right != NULL) {
                    q.push(Info(f.node->right, f.l + 1));
                }
            }

            // After processing current level, add to the global map
            for (auto& p : levelMap) {
                sort(p.second.begin(), p.second.end()); // Sort values at the same vertical level
                hm[p.first].insert(hm[p.first].end(), p.second.begin(), p.second.end());
            }
        }

        vector<vector<int>> ans;
        for (auto& p : hm) {
            ans.push_back(p.second);
        }

        return ans;
    }
};
