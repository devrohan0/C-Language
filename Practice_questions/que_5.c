// if and else if conditional statements

// #include <stdio.h>

// int main() {
//     int marks;
//     printf("Enter your marks :");
//     scanf("%d",&marks);

//     if(marks >= 0 && marks <=30) {
//         printf("you are fail\n");
//     } else if(marks >30 && marks <=100){
//         printf("you are pass\n");
//     }
//     return 0;
// }



// Checking if entered character is lower case or uppper case

#include <stdio.h>

int main () {
    char character;
    printf("Enter Character :");
    scanf("%c", &character);

    if(character >='a' && character <='z'){
        printf("Entered character is lower case\n");
    } else if (character >='A' && character <='Z'){
        printf("Enter character is in upper case\n");
    } else {
        printf("Entered number is not a character\n");
    }
}