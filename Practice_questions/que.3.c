// check if a number is divisible by 2 or check a number is odd or even

#include <stdio.h>

int main() {
    int a;
    printf("Enter the number :");
    scanf("%d", &a);
    printf("%d\n", a%2==0);
    return 0;
}