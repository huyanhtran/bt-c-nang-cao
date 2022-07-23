#include <stdio.h>
#include <stdlib.h>

struct List
{
    int data;
    struct List *next;
};

typedef struct List *Vertor;
Vertor Create(int value){
    Vertor temp;
    temp =(Vertor)malloc(sizeof(struct List));
    temp->next = NULL;
    temp->data = value;
    return temp;
}

Vertor Vertor_push_back(Vertor node, int value){
    Vertor temp, p;
    temp = Create(value);
    if (node == NULL){
        node = temp;
    }else
    {
        p = node;
        while (p->next != NULL)
        {
            p=p->next;
        }

        p->next = temp;
        
    }

    return node;
    
}

Vertor Input(){
    Vertor vt = NULL;
    int n, value;

    do
    {
        printf("Nhap so phan tu n=");
        scanf("%d", &n);
    } while (n<=0);

        for (int i = 0; i < n; i++)
        {
            printf("Nhap gia tri can them: ");
            scanf("%d", &value);
            vt = Vertor_push_back(vt, value);
        }
        
    return vt;
    
}

int Get(Vertor note, int index){
    int i = 0;
    Vertor p = note;

    while (p->next != NULL && i != index)
    {
        i++;
        p= p->next;
    }
    return p->data;
    
}
void printList(Vertor node)
{ 
  printf("\n[ ");;
    while (node!=NULL)
    {
        printf("%d ",node->data);
        node=node->next;

    }
	
   printf(" ]");
}
Vertor deletelast(Vertor node){

}



int main(int argc, char const *argv[])
{
    Vertor vt = Input();

    printf("data: %d", Get(vt, 2));
    printList(vt);

    
    

    return 0;
}
