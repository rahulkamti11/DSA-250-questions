#include <stdio.h>
int main(){
	float SP,CP,profit=0,loss=0;
	printf("Enter the Cost Price of the Product: ");
	scanf("%f",&CP);
	printf("Enter the Selling Price of the Product: ");
	scanf("%f",&SP);
	if(SP>CP){
		profit= SP-CP;
		printf("Profit of Rupees %.2f",profit);
	} else if(CP>SP){
		loss= CP-SP;
		printf("Loss of Rupees %.2f",loss);
	} else{
		printf("No Profit No Loss.");
	}
	
}
