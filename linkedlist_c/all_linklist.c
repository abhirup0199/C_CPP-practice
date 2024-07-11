//linklist
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int val;
	struct node*next;
};
struct node*start=NULL;
void insert_begin(int value)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->val=value;
	temp->next=NULL;
	if(start==NULL)
		{
			start=temp;
		}
	else
		{
			temp->next = start;
            start = temp;
		}
}
void insert_anypoint(int value , int index)
{
    if (index == 0)
    {
        printf("There is no previous node available. \n");
        insert_begin(value);
        printf("The first node is added\n");
    }
    else
    {
        struct node *temp;
        temp = (struct node*)malloc(sizeof(struct node));
        temp->val = value;
        temp->next = NULL;
        if (start == NULL)
        {
            printf("There is no previous node available. \n");
            start = temp;
            printf("The first node is added\n");
        }
        else
        {
            int count = 0;
            struct node *m;
            m = start;
            while (count != (index-1) && m->next != NULL)
            {
                count++;
                m = m->next;
            }
            temp->next = m->next;
            m->next = temp;
            printf("There is %d node available\n",count+1);
            printf("The node is added and connected with the previous point\n");
        }
    }
}
void del_begin()
{
    struct node *temp;
    temp = start;
    start = start->next;
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
	
	
			
