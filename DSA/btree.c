#include<stdio.h>
#include<stdlib.h>
// struct Data type 
struct node
{
   int data;
   struct node *left ,*right;
};

// create elements using malloc
struct node *create(int data){
    struct node *tree= (struct node*) malloc(sizeof(struct node));
    tree->data=data;
    tree->left = tree->right = NULL;
    return tree;
}

// Insert data in node
struct node *insert( struct node *root , int data){
    if (root == NULL)
    {
        return create(data);
    }
    else if(data < root->data)
    {
        insert(root->left,data);
    }
    else{
        insert(root->right,data);
    }
}


// inorder
void inorder(struct node *root){
    if (root != NULL)
    {
        inorder(root->left);
    }
    else
    {
        printf("%d ",root->data);
        inorder(root->right);
    }
    
    
}
int main(){

    struct node *root = NULL;
 
    insert(root,50);
    
    inorder(root);
    
    return 0;
}