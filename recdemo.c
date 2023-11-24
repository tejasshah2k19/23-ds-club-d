#include<stdio.h>


void print(int num) //5  4 
{

    if(num != 0 ){ 
        //print(4) ->  print(3) -> print(2) -> print(1) 
         printf(" %d",num); //1  2 3 4 5 
         print(num-1);
    }
}


int main(){

    print(5);//5 

    return 0;
}