int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }

        if (prev != NULL && root->data <=data)
        {
            return 0;
        }

        prev = root;
        return isBST(root->right);
        
        
    }

    else
    {
        return 1;
    }
    
    
}

