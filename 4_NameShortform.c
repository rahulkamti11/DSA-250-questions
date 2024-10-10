#include <stdio.h>

int main(){
	char fname[20],mname[20],lname[20];
	printf("Enter your Name (<First name> <Middle name> <Last name>) : ");
	scanf("%s %s %s",&fname,&mname,&lname);
	printf("Abbreviated form: %c%c%c",fname[0],mname[0],lname[0]);
	return 0;
	
}
