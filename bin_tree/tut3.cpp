#include <iostream>
#include <stack>
using namespace std;

// Define the structure for a binary tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to perform an inorder traversal using a stack
void inorderTraversal(TreeNode* root) {
    stack<TreeNode*> s;
    TreeNode* current = root;

    while (current != NULL || !s.empty()) {
        while (current != nullptr) {
            s.push(current);

            current = current->left;
        }

        current = s.top();
        
        s.pop();
        cout << current->data << " ";

        current = current->right;
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout<<endl;
    cout << "Inorder traversal of the binary tree: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
