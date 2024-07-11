#include<stdio.h>
int main(){
	char alph;
	printf("Enter a Charecter: ");
	scanf("%c",&alph);
	if(alph=='a'||alph=='e'||alph=='i'||alph=='o'||alph=='u'){
		printf("The Charecter is Vowel");
	}
	else{
		printf("consonant");
	}
}
