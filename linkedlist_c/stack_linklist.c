//stack_linklist
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int val;
	struct node*next;
};

struct node*start=NULL;
int count = 0 , cap;

void push(int value)
{
	if (count == (cap))
		{
			printf("STACK OVERFLOW...\n");
		}
	else
	{
		struct node*temp;
		temp=(struct node*)malloc(sizeof(struct node));
		temp->val=value;
		temp->next=NULL;
		if(start==NULL)
		{
			start=temp;
			count++;
		}
		else
		{
			temp->next = start;
			start = temp;
			count++;
		}
	}
}

void pop()
{
	if (start == NULL)
	{
		printf("STACK UNDERFLOW...\n");
	}
	else
	{
		struct node *temp;
		temp = start;
		start = start->next;
		free(temp);
		count--;
	}
}

void peek()
{
	if(start==NULL)
		printf("No Stack Available...\n");
    else
        printf("%d\n",start->val);
}

void display()
{
    if (start == NULL)
    {
        printf("There is no STACK available\n");
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
int main ()
{
	int input,sc;
	printf("Enter Maximum Size of STACK = \n");
	scanf("%d",&cap);
	
	for(int i=1 ; i>0 ; i++){
    printf("1. Push The Value\n2. Show The Values In The STACK\n3. POP\n4. PEEK Value\n5. EXIT\n");
	printf("\nCase = ");
	scanf("%d",&sc);
	switch(sc){
		case 1 :
        {
			printf("\nPlease give the INPUT=");
			scanf("%d",&input);
			push(input);
        }
		break;
		case 2 :
			display();
		break;
		case 3 :
		{
			pop();
        }
		break;
		case 4 :
			peek();
		break;
        case 5 :
			exit(0);
		break;
		default :
		printf("There is only 4 cases available, This case is not available.....\n");
		}
	}
}
	
	
			
