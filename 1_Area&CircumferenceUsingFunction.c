#include <stdio.h>

const PI=3.14;
float area(float r){
	float area = 	PI*r*r;
	return area;
}
	
float circumference(float r){
	float circumference= 2*PI*r;
	return circumference;	
} 

int main(){
	float r;
	printf("Enter the radius of the circle: ");
	scanf("%f",&r);
	printf("\nArea of the circle of radius %f is: %f sq. units",r,area(r));
	printf("\nCircumference of the circle of radius %f is: %f units",r,circumference(r));
	return 0;
	
}








