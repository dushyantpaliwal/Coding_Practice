#include <climits> // For INT_MIN

int floorInBST(TreeNode<int>* root, int X)
{
    // To find the floor, we traverse the BST while maintaining the largest value ≤ X.
    int floor = INT_MIN; // Start with the smallest possible value
    TreeNode<int>* current = root;

    while (current != nullptr) {
        if (current->val == X) {
            // Exact match found; this is the floor.
            return current->val;
        }
        else if (current->val < X) {
            // Current value is a candidate for the floor, update and go right.
            floor = current->val;
            current = current->right;
        }
        else {
            // Current value is greater than X, move left.
            current = current->left;
        }
    }

    // Return the found floor value, or INT_MIN if no floor exists.
    return floor;
}
