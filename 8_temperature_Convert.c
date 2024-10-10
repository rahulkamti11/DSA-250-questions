#include <stdio.h>

int main() {
    float t,c,f;
    char s;
    printf("Enter the unit of temperature(Use C for Celsius or F for fahrenheit):");
    scanf(" %c",&s);
    printf("\nEnter temperature:");
    scanf("%f",&t);
    if(s=='c'|| s=='C'){
        f=(t*9/5)+32;
        printf("\n%.2f fahrenheit",f);
    }
    else if(s=='f'|| s=='F'){
        c=(t-32)*5/9;
        printf("\n%.2f celsius",c);
    }
    
    return 0;
}
