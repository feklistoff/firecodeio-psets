/*
Given a binary tree, write a method to recursively traverse the tree in the preorder manner. 

Mark a node as visited by adding its `value` to the list - `vector <int> preordered_list`.

```
Example: 
     1
    / \
   2   3     ==> 1245367
  / \ / \
 4  5 6  7 
```
*/

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
