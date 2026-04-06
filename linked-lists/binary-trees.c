#include<stdio.h>
#include<stdlib.h>

struct TreeNode {
    int value;
    struct TreeNode* leftChild;
    struct TreeNode* rightChild;
};

struct TreeNode* makeNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->value = val;
    newNode->leftChild = NULL;
    newNode->rightChild = NULL;
    return newNode;
}

struct TreeNode* buildTree() {
    int num;

    printf("Enter value (-1 for no node): ");
    scanf("%d", &num);

    if (num == -1)
        return NULL;

    struct TreeNode* newNode = makeNode(num);

    printf("Enter left child of %d\n", num);
    newNode->leftChild = buildTree();

    printf("Enter right child of %d\n", num);
    newNode->rightChild = buildTree();

    return newNode;
}

void traverseInorder(struct TreeNode* rootNode) {
    if (rootNode == NULL)
        return;

    traverseInorder(rootNode->leftChild);
    printf("%d ", rootNode->value);
    traverseInorder(rootNode->rightChild);
}

void traversePreorder(struct TreeNode* rootNode) {
    if (rootNode == NULL)
        return;

    printf("%d ", rootNode->value);
    traversePreorder(rootNode->leftChild);
    traversePreorder(rootNode->rightChild);
}

void traversePostorder(struct TreeNode* rootNode) {
    if (rootNode == NULL)
        return;

    traversePostorder(rootNode->leftChild);
    traversePostorder(rootNode->rightChild);
    printf("%d ", rootNode->value);
}

int main() {
    struct TreeNode* rootNode = NULL;

    printf("Create Binary Tree\n");
    rootNode = buildTree();

    printf("\nInorder Traversal: ");
    traverseInorder(rootNode);

    printf("\nPreorder Traversal: ");
    traversePreorder(rootNode);

    printf("\nPostorder Traversal: ");
    traversePostorder(rootNode);

    return 0;
}
