#include<stdio.h>
int main(){
		char ch,extra;
		printf("Enter a Character = ");
		scanf("%c",&ch);
		if((ch>='a' && ch<='z') || (ch>='A' && ch<= 'Z'))
			{
				if(ch>='A' && ch<='Z')
					{
						printf("%c is an Uppercase Alphabet.\n",ch);
						extra=ch+32;
						printf("Lowercase = %c\n",extra);
						
							switch(ch)
								{
									case 'A' :
									printf("Vowel");
									break;
									case 'E' :
									printf("Vowel");
									break;
									case 'I' :
									printf("Vowel");
									break;
									case 'O' :
									printf("Vowel");
									break;
									case 'U' :
									printf("Vowel");
									break;
									default :
									printf("consonant");
									break;
								}
					}
				else
					{
						printf("%c is a Lowercase Alphabet.\n",ch);
						extra=ch-32;
						printf("Uppercase = %c\n",extra);
						
							switch(ch)
								{
									case 'a' :
									printf("Vowel");
									break;
									case 'e' :
									printf("Vowel");
									break;
									case 'i' :
									printf("Vowel");
									break;
									case 'o' :
									printf("Vowel");
									break;
									case 'u' :
									printf("Vowel");
									break;
									default :
									printf("consonant");
									break;
								}
					}
			}
		else
		{
			printf("%c is a digit",ch);
		}
	return 0;
}
