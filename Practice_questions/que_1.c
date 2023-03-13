/* weite a program to calculate the area of a square 
(are of square = side * side) */

#include <stdio.h>

int main() {
    int side;
    printf("Enter side :");
    scanf("%d", &side);
    
    printf("area is %d", side*side);
    return 0;
}