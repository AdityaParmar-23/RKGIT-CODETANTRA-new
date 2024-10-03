void inorder( struct node *root)
{
    if (root != NULL) 
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    // and print inorder traversal
    }
}
void preorder( struct node *root)
{
        if (root != NULL) 
        {
            printf("%d ", root->data);
            preorder(root->left);
            preorder(root->right);
        }// write your code here to compute 
    // and print preorder traversal
}
void postorder(struct node *root)
{
        if (root != NULL)
        {
            postorder(root->left);
            postorder(root->right);
            printf("%d ", root->data);
        }// write your code here to compute 
    // and print postorder traversal
}
