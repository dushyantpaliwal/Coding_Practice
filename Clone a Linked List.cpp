class Solution {
public:
    Node* copyRandomList(Node* head) {
        // <old node, new node>
        unordered_map<Node*, Node*> um;
        Node* ptr = head;

        while (ptr) {
            um[ptr] = new Node(ptr->val);
            ptr = ptr->next;
        }

        ptr = head;
        while (ptr) {
            um[ptr]->next = um[ptr->next];
            um[ptr]->random = um[ptr->random];
            ptr = ptr->next;
        }

        return um[head];
    }
};
