#include <stdio.h>
int main(){
	char a;
	printf("Enter a Character(Only Alphabets):");
	scanf("%c",&a);
	if(a=='a' || a=='A' || a=='e' || a=='E'|| a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U')
	printf("%c is a vowel.",a);
	else
	printf("%c is Consonant:",a);
	return 0;
}
