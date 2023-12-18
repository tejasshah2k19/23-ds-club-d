#include<stdio.h> 
#include<stdlib.h> 
#include"stack.h" 
#define SIZE 100 

struct node
{
    int src,dest; //1-2 2-1 
    struct node *next; 
}*head=NULL;

void addEdge(int src,int dest){
    struct node *tmp,*p;
    if(head == NULL){
        head = (struct node*)malloc(sizeof(struct node));
        head->src = src; 
        head->dest = dest;
        head->next = NULL; 
    }else{
        p = head; 
        while(p->next != NULL)
        {
            p = p->next; //last node 
        }
        tmp = (struct node*)malloc(sizeof(struct node));
        tmp->src = src; 
        tmp->dest = dest;
        tmp->next = NULL;
        p->next = tmp ; 
    }
}


void displayList(){
    struct node *p; 
    p=head; 

    while(p!= NULL){
        printf("\n %d -  %d",p->src,p->dest);   
        p=p->next; 
    }
}

    void dfs(int x,int totalVertex){//1 2 
           int visited[SIZE],i,flag=0; 
            struct node *p;
            int count = 0;  
            p=head;  
            visited[0] = x;//1 
            count++;  //1 2 3 4 5 

        while(count != totalVertex){ 
            while(p!= NULL){
                if(p->src == x){ //
                        flag=0; 
                    for(i=0;i<count;i++){
                            if(visited[i] == p->dest){
                                flag=1;   //aready visited 
                                break; 
                            }
                    } 
                    if(flag == 0){ //p->dest new 
                            push(x);//1  2   6  5   
                            x = p->dest; //2 6  5 3  
                            visited[count++] = x; //1 2 6 5 3     
                            p=head; 
                    } 
                }    
                p=p->next; 
            }
            x = pop();
        }



    }

int main(){

    int te,tv; 
    int i;
    int src,dest; 
    
    printf("\nEnter Total Vertex and Total Edges? ");
    scanf("%d%d",&tv,&te); // 6 7 

    for(i=1;i<=te;i++){
        printf("\nEnter Src and Dest");
        scanf("%d%d",&src,&dest);

        addEdge(src,dest);
        addEdge(dest,src); 
    }
    
    displayList();
    
    //BFS 

    //DFS ->  
    dfs(1,tv); 

    return 0;
}
