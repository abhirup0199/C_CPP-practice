//Prepare a Caste System using if-else-if Ladder
#include<stdio.h>
int main()
{
	char caste;
	printf("Enter Your Caste");
	scanf("%c",&caste);
	if(caste=='g' || caste=='G')
	{
		printf("General");
	}
        else if(caste=='s' || caste=='S')
        {
                printf("Schedule Caste");
        }
        else if(caste=='t' || caste=='T')
        {
                printf("Schedule Tribe");
        }
        else if(caste=='o' || caste=='O')
        {
		printf("Other Backward Classes");
	}

	else if(caste=='p' || caste=='P')
	{
		printf("Physically Challenged");
	}
