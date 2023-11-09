#include <iostream>
#include<cmath>

using namespace std; // Add the "using namespace std" directive

// Define the structure for a binary tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

int treeDepth(struct TreeNode* root)
{
    if(!root) return 0;
    int maxLeft = treeDepth(root->left);
    int maxRight = treeDepth(root->right);
    int ans = abs(maxLeft-maxRight)+1;
    return ans;
    cout<<ans;
}

bool isBalanced(struct TreeNode *root)
{
    if (treeDepth(root))
    {
        return true;
    }
    else{
        return false;
    }
    
}

int main() {
    cout<<"printing ans"<<endl;
    TreeNode* root1;
    TreeNode* root2;
    TreeNode* root3;
    TreeNode* root4;
    TreeNode* root5;

    root1->data = 3;
    root2->data = 9;
    root3->data = 20;
    root4->data = 15;
    root5->data = 7;

    root1->left = root2;
    root2->left = NULL;
    root2->right = NULL;

    root1->right = root3;
    root3->right = root5;
    root3->left = root4;

    root4->left = NULL;
    root4->right = NULL;

    root5->left = NULL;
    root5->right = NULL;


    // isBalanced(root1);
    treeDepth(root1);


    return 0;
}

