#include<stdio.h>
#include<stdlib.h>
struct node
{
    char op;
    int coef;
    char exp;
    int p;
    struct node *next;
};
struct node *start = NULL;
void insert(char o , int c , char e , int p)
{
    struct node *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->coef = c;
    tmp->exp = e;
    tmp->op = o;
    tmp->p = p;
    tmp->next = NULL;
    if (start == NULL)
    {
        start = tmp;
    }
    else
    {
        struct node *m;
        m = start;
        while (m->next != NULL)
        {
            m = m->next;
            m->next = tmp;
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
        printf("%c%d%c^%d\n",m->op,m->coef,m->exp,m->p);
        m = m->next;
        }   
	    printf("%c%d%c^%d\n",m->op,m->coef,m->exp,m->p);
    }
}
int main ()
{
	int input,sc,index,b,d;
	char a,c;
	for(int i=1 ; i>0 ; i++){
    printf("1. input the value\n2. show the result\n3. EXIT\n");
	printf("\nCase = ");
	scanf("%d",&sc);
	switch(sc){
		case 1 :
        {
            printf("Enter the operator = \n");
            scanf(" %c",&a);
            printf("Enter the Coef = \n");
            scanf("%d",&b);
            printf("Enter the Vrriable = \n");
            scanf(" %c",&c);
            printf("Enter the power = \n");
            scanf("%d",&d);
            insert(a , b , c , d);
        }
		break;
		case 2 :
		display();
		break;
        case 3 :
		exit(0);
		break;
		default :
		printf("There is only 4 input, This input is not available");
		}
	}
}
	
	
			
