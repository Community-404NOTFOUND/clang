// Pre-order,Inorder,Post-order traversal of the binary tree
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode(int data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void printInorder(struct node* node){
    if(node == NULL) return;
    printInorder(node->left);   // pre-order traversal
    printInorder(node->right);   // in-order traversal
    printf("%d",node->data);    // post-order traversal
}

int main(){
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("Inorder traversal of binary tree is \n");

    printInorder(root);
    return 0;
}

