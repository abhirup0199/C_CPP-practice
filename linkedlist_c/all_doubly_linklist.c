//linklist
#include<stdio.h>
#include<stdlib.h>
#include"insert.h"
struct node 
{
	int val;
	struct node*next;
    struct node*prev;
};
struct node*start=NULL;


void del_begin()
{
    struct node *temp;
    temp = start;
    start = start->next;
    start->prev = NULL;
    free(temp);
}
void del_anypoint(int index){
    if (start == NULL)
    {
        printf("There is no linklist available");
    }
    else if (index == 0)
    {
        del_begin();
    }
    else
    {
        int count = 0;
        struct node *p , *m;
        m = start;
        while (count != index && m->next != NULL)
        {
            count++;
            p = m;
            m = m->next;
        }
        if (count == index)
        {
            p->next = m->next;
            m->next->prev = p;
            free(m);
        }
        else if (m->next == NULL)
        {
            printf("List ends , nothing can't be deleted");
        }
        
        
    }
    
}
void display()
{
    if (start == NULL)
    {
        printf("There is no linklist available");
    }
    else{
        struct node *m;
        m=start;
        while(m->next!=NULL){
        printf("%d\n",m->val);
        m = m->next;
        }   
	    printf("%d\n",m->val);
    }
}
void main ()
{
	int input,sc,index;
	
	for(int i=1 ; i>0 ; i++){
    printf("1. input the value\n2. show the result\n3. delete\n4. EXIT");
	printf("\nCase = ");
	scanf("%d",&sc);
	switch(sc){
		case 1 :
        {
        printf("INDEX=");
		scanf("%d",&index);
        printf("\nINPUT=");
		scanf("%d",&input);
		insert_anypoint(input , index);
        }
		break;
		case 2 :
		display();
		break;
		case 3 :
		{
        printf("INDEX=");
		scanf("%d",&index);
		del_anypoint(index);
        }
		break;
        case 4 :
		exit(0);
		break;
		default :
		printf("There is only 4 input, This input is not available");
		}
	}
}
	
	
			
