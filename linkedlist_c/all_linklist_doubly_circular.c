//circular_single_linklist
#include<stdio.h>
#include<stdlib.h>
typedef struct list 
{
	int val;
	struct list*next;
    struct list*prev;
}node;
//function for create new node
node* newnode(int value)
{
    node* temp;
    temp = (node*)malloc(sizeof(node));
    temp->val = value;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}
//function for insert at begin
node* insert_begin(node* start , int value)
{
	node*temp;
	temp = newnode(value);
	if(start==NULL)
		{
			start=temp;
            start->next = start;
            start->prev = start;
            return start;
		}
	else
		{
            node* m = start;
            while (m->next == start)
            {
                m = m->next;
            }
			temp->next = start;
            temp->prev = m;
            start = temp;
            m->next = temp;
            return start;
		}
}
//function for insert at anypoint
node* insert_anypoint(node* start , int value , int index)
{
    if (index == 0)
    {
        printf("There is no previous node available. \n");
        insert_begin(start , value);
        printf("The first node is added\n");
    }
    else
    {
        node *temp;
        temp = newnode(value);
        if (start == NULL)
        {
            printf("There is no previous node available. \n");
            start = temp;
            start->next = start;
            start->prev = start;
            return start;
            printf("The first node is added\n");
        }
        else
        {
            int count = 0;
            node *m;
            m = start;
            while (count != (index-1) && m->next != start)
            {
                count++;
                m = m->next;
            }
            temp->prev = m;
            temp->next = m->next;
            m->next->prev = temp;
            m->next = temp;
            return start;
            printf("There is %d node available\n",count+1);
            printf("The node is added and connected with the previous point\n");
        }
    }
}
//function for delete at begin
void del_begin(node* start)
{
    node* temp;
    temp = start;
    start = start->next;
    start->prev = temp->prev;
    temp->prev->next = start;
    free(temp);
}
//function for delete at anypoint
void del_anypoint(node* *start , int index){
    if (start == NULL)
    {
        printf("There is no linklist available");
    }
    else if (index == 0)
    {
        del_begin(*start);
    }
    else
    {
        int count = 0;
        node* p;
        node* m = start;
        while (count != index && m->next != start)
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
        else if (m->next == start)
        {
            printf("List ends , nothing can't be deleted");
        }
    }
}
//display function
void display(node* start)
{
    if (start == NULL)
    {
        printf("There is no linklist available");
    }
    else{
        node *m;
        m=start;
        while(m->next != start){
        printf("%d\n",m->val);
        m = m->next;
        }   
	    printf("%d\n",m->val);
    }
}
void main ()
{
	int input,sc,index;
    node* start = NULL;
	
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
		start = insert_anypoint(start , input , index);
        }
		break;
		case 2 :
		display(start);
		break;
		case 3 :
		{
        printf("INDEX=");
		scanf("%d",&index);
		del_anypoint(&start , index);
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
	
	
			
