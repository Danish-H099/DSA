#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    char data;
    struct TreeNode *left, *right;
};

// Function to create a binary tree interactively
struct TreeNode *create() {
    char data;
    struct TreeNode *newnode;
    
    // Allocate memory for new node
    newnode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newnode == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    // Use a space before %c to consume any newline or whitespace
    printf("Enter Data (-1 for no node): ");
    while ((data = getchar()) == '\n'); // Skip newlines
    
    // Use a simple method to check for no node input
    if (data == '-') {
        if (getchar() == '1') {
            getchar(); // Consume the newline character after -1
            free(newnode); // Free allocated memory if no node
            return NULL;
        }
    }

    newnode->data = data;
    
    printf("Enter left Child of %c\n", data);
    newnode->left = create();
    
    printf("Enter right Child of %c\n", data);
    newnode->right = create();
    
    return newnode;
}

// In-order traversal to test tree creation
void inorder(struct TreeNode *root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%c ", root->data);
    inorder(root->right);
}

int main() {
    struct TreeNode *root = create();
    printf("In-order traversal of the tree: ");
    inorder(root);
    printf("\n");
    return 0;
}
