#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node 
{
	char val;
	struct node*next;
};

struct node*start=NULL;
int count = 0 , cap;

void push(char value)
{
	if (count == (cap-1))
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

char pop()
{
    char re;
	if (start == NULL)
	{
		printf("STACK UNDERFLOW...\n");
        return 0;
	}
	else
	{
		struct node *temp;
		temp = start;
		start = start->next;
        re = temp->val;
		free(temp);
		count--;
        return re;
	}
}

char peek()
{
	if(start==NULL)
		printf("No Stack Available...\n");
    else
        return start->val;
}

int priority(char s)
{
    if(s == '+' || s == '-')
    return 1;
    else if(s == '*' || s == '/')
    return 2;
    else if(s == '^')
    return 3;
}

void postfix(char *s)
{
    char a , b;
    int p_1 , p_2;
    for(int i = 0 ; i < strlen(s) ; i++)
    {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^' || s[i] == '(' || s[i] == ')')
        {
            if(s[i] != '(' || s[i] != ')')
            {
                p_1 = priority(s[i]);
                if(start == NULL)
                {
                    push(s[i]);
                }
                else
                {
                    if(s[i] == '^')
                    {
                        push(s[i]);
                    }
                    else
                    {
                        p_2 = priority(peek());
                        if(p_1>p_2)
                        push(s[i]);
                        else if(p_2 > p_1 || p_1 == p_2)
                        {
                            b = pop();
                            printf("%c",b);
                            push(s[i]);
                        }
                    }
                }
            }
            else
            {
                if(s[i] == '(')
                push(s[i]);
                else if(s[i] == ')')
                {
                    while(peek() != '(' || start != NULL)
                    {
                        b = pop();
                        printf("%c",b);
                    }
                }
            }
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    while(start != NULL)
    {
        b = pop();
        printf("%c",b);
    }
}

int main()
{
    char *str;
    int n;
    printf("Enter The Maximum Capacity of Your STACK = ");
    scanf("%d",&cap);
    printf("\nEnter The Limit Of Your INFIX Expression = ");
    scanf("%d",&n);
    str = (char*)malloc(n*sizeof(char));
    printf("\nEnter The Expression = ");
    scanf("%s",str);
    postfix(str);
}