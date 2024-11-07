#include <stdio.h>
int main(){
	char a;
	printf("Enter a character: ");
	scanf("%c",&a);
	if((a>='A' && a<='Z') || (a>='a' && a<='z'))
	printf("%c is a Alphabet.",a);
	else 
	printf("%c is Not an Alphabet.",a);
	
	return 0;
}
