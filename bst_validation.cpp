
bool is_bst(treeNode *root, int min, int max)
{
    if (!root->left and !root->right)
    {
        if (root->value < max and root->value > min)
            return true;
    }
    
    if (!root->value)
        return true;

    if (root->value < min or root->value > max)
        return false;

    if (root->left and !root->right)
        return is_bst(root->left, min, root->value);

    if (root->right and !root->left)
        return is_bst(root->right, root->value, max);
    
    return is_bst(root->left, min, root->value) and is_bst(root->right, root->value, max);
}

bool validate_bst(treeNode *root)
{   
    return is_bst(root, INT_MIN, INT_MAX);
}