/* print TRUE or FALSE for the following questions

If its sunday & its snowing -> TRUE
If its sunday or its raining -> TRUE
If a number is greater than 9 & less then 100 -> TRUE   OR check if a entered number is 2 digit number or not*/

#include <stdio.h>

// int main() {
//     int isSunday, isSnowing;
//     isSunday=1;
//     isSnowing=1;
//     printf("%d\n",isSunday && isSnowing);
//     return 0;
// }

// int main() {
//     int itsSunday =1;
//     int itsRaining =0;
//     printf("%d\n", itsSunday || itsRaining);
//     return 0;
// }

int main() {
    int x;
    printf("Enter Number :");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);
    return 0;
}