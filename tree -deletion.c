#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int data; 
    struct node *left,*right; 
}*root=NULL;


struct node* addNode(struct node *node,int num) // 100,300   200,300  NULL,300 
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

void inOrder(struct node *root){ //8 ->3  ->1   
    if(root != NULL){  //3
        inOrder(root->left);//->NULL    
        printf("%d ",root->data);//1
        inOrder(root->right);
    }   
}

struct node* deleteNode(struct node* root,int data){
struct node *tmp; 
        if(root == NULL){
            return root;
        }
        else  if(root->data == data)
        {
            //present 
            //delete 
            printf("\n%d Found",root->data);
            if(root->left == NULL && root->right == NULL){
                printf("\n 0 Child");
                free(root);
                return NULL; 
            }else if(root->left != NULL && root->right != NULL){
                printf("\n 2 child");
                //inS 
                //inPre 
                //left -> max
                //right -> min 
               tmp =  findMax(root->left);//20 
               root->data = tmp->data; 

             return deleteNode(root->left,data); //verify 

            }else if(root->left != NULL && root->right == NULL){
                printf("\n1 child -> left ");
                tmp = root->left; 
                free(root);
                return tmp; 
            }else if(root->right != NULL && root->left == NULL){
                 tmp = root->right; 
                free(root);
                return tmp; 
                
                printf("\n1 child -> right ");
            }

            return root; 
        }else if(root->data < data){
            //right'
            root->right = deleteNode(root->right,data); 
            return root; 
        }else if(root->data > data){
            //left 
            root->left = deleteNode(root->left,data);
            return root; 
        }
        return root; 
}
int main(){

   root =  addNode(root,56); //null,100 
           addNode(root,34); // {null,100,null} ,200 
           addNode(root,70); // 100,300 
           addNode(root,12);
          addNode(root,40);
           addNode(root,65);
           addNode(root,90);
           addNode(root,100);

           inOrder(root);

           deleteNode(root,40);
           printf("\n");
           inOrder(root);
           
           deleteNode(root,34);
           printf("\n");
           inOrder(root);
    return 0; 
}