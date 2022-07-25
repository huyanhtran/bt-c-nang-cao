#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 5

int intarray[MAX];
int front=-1;
int rear =-1;
int item=0;

bool isempty(){
    return item=0;
}
bool isfull(){
    return item == MAX;
}

void enqueue(int data){
  
    if (rear==MAX-1){
        printf ("---Queue overflow---\n");

    }else{
        if (front==-1)
        front=0;
        
        rear=rear+1;
        intarray[rear]= data;
    }
}
int dequeue(){
    int data= intarray[front++];

    if (front=MAX){
        front=0;

    } 
    item--;
   return data;  
}
void show()
{
     
    if (front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = front; i <= rear; i++)
            printf("%d ", intarray[i]);
        printf("\n");
    }
} 
    int main() {
 
  enqueue(7);
  enqueue(5);
  enqueue(34);
  enqueue(7);
  enqueue(65);
  

  
   show();
 int num = dequeue();
	
   printf("delete:%d\n",num);
   show();
   
}
