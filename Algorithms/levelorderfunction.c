void levelOrderTraversal(struct TreeNode* root) {
    int maxDepth = getMaxDepth(root);

    for (int i = 1; i <= maxDepth; i++) {
        printGivenLevel(root, i);
    }
}

// Function to get the maximum depth of the tree
int getMaxDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;

    int leftDepth = getMaxDepth(root->left);
    int rightDepth = getMaxDepth(root->right);

    return (leftDepth > rightDepth) ? (leftDepth + 1) : (rightDepth + 1);
}

// Function to print nodes at a given level
void printGivenLevel(struct TreeNode* root, int level) {
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->val);
    else if (level > 1) {
        printGivenLevel(root->left, level - 1);
        printGivenLevel(root->right, level - 1);
    }
}
