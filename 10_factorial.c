#include <stdio.h>
int main(){
	int n,f=1;
	printf("Enter an positive integer: ");
	scanf("%d",&n);
	int i;
	for(i=n;i>0;i--){
		f=f*i;
	}
	printf("%d",f);
}
