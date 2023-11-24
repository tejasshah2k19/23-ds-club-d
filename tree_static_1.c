#include<stdio.h>
 
struct node
{
    int data; 
    struct node *left,*right; 
}*root=NULL;


int main(){

    struct node *leftChild ,*rightChild; 
    
    root = (struct node*) malloc(sizeof(struct node));
    root->data = 30 ;
    root->left = NULL; 
    root->right = NULL;

    leftChild = (struct node*)malloc(sizeof(struct node));
    leftChild->data = 20; 
    leftChild->left = NULL;
    leftChild->right=NULL; 

    root->left = leftChild; 

     //right 

    printf("\n%d %d %d",root->data,root->left->data,root->right->data);
     
    return 0; 
}
