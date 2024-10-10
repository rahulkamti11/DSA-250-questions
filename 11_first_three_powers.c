//first three power of an integer
#include <stdio.h>

int main() {
    int n;
    printf("Enter an positive integer:");
    scanf("%d",&n);
    if(n>=0)
    printf("%lld  %lld  %lld",n,n*n,n*n*n);
    else
    printf("Wrong input, Enter positive integer only.");
    
    return 0;
}
