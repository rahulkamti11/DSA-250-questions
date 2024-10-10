#include <stdio.h>

int main(){
	float b,h;
	printf("Enter the base of triangle: ");
	scanf("%f",&b);
	printf("Enter the height of triangle: ");
	scanf("%f",&h);
	float area=0.5*b*h;
	printf("The area of the triangle is: %.2f sq. units",area);
	return 0;
}
