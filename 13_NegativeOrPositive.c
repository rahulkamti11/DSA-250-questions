#include <stdio.h>
int main(){
	int x;
	printf("Enter an Integer:");
	scanf("%d",&x);
	if(x<0)
	printf("%d is a Negative Number.",x);
	else
	printf("%d is a Positive Number.",x);
	return 0;
}
