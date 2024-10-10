#include <stdio.h>
int main(){
	float r,PI;
	printf("Radius: ");
	scanf("%f",&r);
	float area=PI*r*r;
	float circum=2*PI*r;
	printf("Area : %f",area);
	printf("Circumference : %f",circum);
	
}
