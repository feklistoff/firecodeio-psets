vector<int> level_order(treeNode *root)
{
    if (!root) return {};
    
    std::vector<int> vec;
    std::queue<treeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        treeNode *tmp = q.front();
        q.pop();
        vec.push_back(tmp->value);
        if (tmp->left)
            q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
    
    return vec;
}