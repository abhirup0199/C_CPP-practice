//Prepare a Marks Gradiation System using if-else-if Ladder
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter Your Marks");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("outstanding");
	}
        else if(marks>=80)
        {
                printf("excellent");
        }
        else if(marks>=70)
        {
                printf("very good");
        }
        else if(marks>=60)
        {
		printf("good");
	}

	else if(marks>=40)
	{
		printf("pass");
	}
	else
	{
	printf("Better luck next time");
	}
	return 0;
}
