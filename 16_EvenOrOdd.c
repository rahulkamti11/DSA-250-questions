#include <stdio.h>
int main(){
	int n;
	printf("Enter an Integer: ");
	scanf("%d",&n);
	if(n==0)
	printf("%d is Zero and it is Neither Even Nor Odd.",n);
	else if(n%2==0)
	printf("%d is an Even Number.",n);
	else
	printf("%d is an Odd Number.",n);
	
	return 0;
}
