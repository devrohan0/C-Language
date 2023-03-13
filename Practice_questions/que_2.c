/* Write  a program to calculate arae of a circle 
 radius is given. (area of a circle = piRsquare where:
 the value of Pi = 3.14)*/

 #include <stdio.h>

 int main() {
    float radius;
    printf("Enter radius :");
    scanf("%f",&radius);

    printf("Area is : %f", 3.14 * radius * radius);
    return 0;
 }

