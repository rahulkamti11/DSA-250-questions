#include <stdio.h>

int main() {
    int x,y;

    printf("Enter two numbers: ");
    scanf("%d %d", x, y);

    if (x > y) {
        printf("%d is the maximum.\n", x);
    } else {
        printf("%d is the maximum.\n", y);
    }

    return 0;
}

