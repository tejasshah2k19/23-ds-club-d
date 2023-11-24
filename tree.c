#include<stdio.h>
 
struct node
{
    int data; 
    struct node *left,*right; 
}*root=NULL;


addNode(struct node *node,int num) // 100,300   200,300  NULL,300 
{
    if(node == NULL){
        node = (struct node*)malloc(sizeof(struct node));
        node->data = num;
        node->left=NULL;
        node->right = NULL;
        return node;//300 
    }else{
        if(node->data > num){
            //left 
            node->left = addNode(node->left,num); 
            //100->left = addNode(NULL,num);
            return node;
        }else{
            //right 
            node->right = addNode(node->right,num);
            //100->right = addNode(200,300);
            //200->right = addNode(NULL,300); //300 
            return node;//200  100  
        }
    }
}

int main(){

   root =  addNode(root,100); //null,100 
           addNode(root,200); // {null,100,null} ,200 
           addNode(root,300); // 100,300 
    return 0; 
}