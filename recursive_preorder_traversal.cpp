
vector<int> preordered_list;

void preorder(treeNode *root)
{
    if (root)
    {
        preordered_list.push_back(root->value);
        preorder(root->left);
        preorder(root->right);
    }
}
