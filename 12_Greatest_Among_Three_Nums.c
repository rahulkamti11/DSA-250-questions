#include <stdio.h>
int main(){
	int x,y,z;
	printf("Enter the Numbers for x,y,z respectively:\n");
	scanf("%d %d %d",&x,&y,&z);
	if(x>y && x>z)
	printf("x = %d is the greatest",x);
	else if(y>x && y>z)
	printf("y = %d is the greatest",y);
	else if(z>y && z>x)
	printf("z = %d is the greatest",z);
	else if(x==y && x<z)
	printf("z = %d is the greatest",z);
	else if(x==z && x<y)
	printf("y = %d is the greatest",y);
	else if(y==z && x>y)
	printf("y = %d is the greatest",x);
	else if(x==y || y==z || x==z)
	printf("No greatest no. is present. All the numbers are equal.");
	return 0;
	
}
