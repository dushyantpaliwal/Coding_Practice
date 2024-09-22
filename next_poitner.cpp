class Solution {
public:
    void helper(Node *root, Node * parent){
        if(root == NULL)return;
        if(parent != NULL)
        parent->left->next = parent->right;
        if(parent != NULL && parent->next != NULL)
            parent->right->next = parent->next->left;
            if(root->left == NULL && root->right == NULL)
            return ;
            helper(root->left, root);
            helper(root->right, root);

    }
    Node* connect(Node* root) {
       //base case
      helper(root, NULL);

    //     if(root ==NULL)return root;
    //    Node* new1 = con(root->left);
        
    //     Node *new2 = con(root->right);
    //     new1->next = new2;
    //     return temp;
    return root;
    }
};
class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return NULL;
        queue<Node*>q;
        q.push(root);
        while (!q.empty()){
             int size = q.size();
            for( int i =0; i < size; i++){
                 Node *f = q.front();
                 q.pop();
              if(i!=size-1)
                f->next = q.front();
              if(f->left!=NULL){
                q.push(f->left);
              }
              if(f->right!=NULL){
                q.push(f->right);
              }
            }
        }
    //     if(root ==NULL)return root;
    //    Node* new1 = con(root->left);
        
    //     Node *new2 = con(root->right);
    //     new1->next = new2;
    //     return temp;
    return root;
    }
};
