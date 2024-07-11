//stack_array
#include<stdio.h>
#include<stdlib.h>
int cap , top = -1;
void push(int input , int *stack)
{
    if(top == (cap-1))
    {
        printf("STACK OVERFLOW---");
    }
    else
    {
        stack[++top] = input;
    }
}

void pop()
{
    if(top == -1)
    printf("STACK UNDERFLOW---");
    else
    top--;
}

void peek(int *stack)
{
    if(top == (cap-1))
    printf("NO STACK AVAILABLE---");
    else
    printf("%d",stack[top]);
}

int main ()
{
    int *stack = (int*)malloc(cap*sizeof(int));
	int input,sc;
	printf("Enter Maximum Size of STACK = \n");
	scanf("%d",&cap);
	
	for(int i=1 ; i>0 ; i++){
    printf("1. Push The Value\n2. POP\n3. PEEK Value\n4. EXIT\n");
	printf("\nCase = ");
	scanf("%d",&sc);
	switch(sc){
		case 1 :
        {
			printf("\nPlease give the INPUT=");
			scanf("%d",&input);
			push(input , stack);
        }
		break;
		case 2 :
		{
			pop();
        }
		break;
		case 3 :
			peek(stack);
		break;
        case 4 :
			exit(0);
		break;
		default :
		printf("There is only 3 cases available, This case is not available.....\n");
		}
	}
}