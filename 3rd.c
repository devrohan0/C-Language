// check if a entered age is adult or not (if else condition)

// #include <stdio.h>

// int main() {
//     int age;
//     printf("Enter Your Age :");
//     scanf("%d", &age);
    
//     if(age > 18){
//         printf("You are adult\n");
//         printf("You can vote\n");
//     }
//     else {
//         printf("You are not adult\n");
//         printf("You cant vote\n");
//     }
//     printf("Thank You!\n");
//     return 0;
// }

// if, else and else if examles

// #include <stdio.h>

// int main() {
//     int age;
//     printf("Enter Your Age :");
//     scanf("%d", &age);

//     if(age >=18){
//         printf("You are an adult\n");
//     }
//     else if(age >13 && age <18){
//         printf("You are a teenager\n");
//     }
//     else {
//         printf("you are a chlid\n");
//     }
//     printf("Thank You!\n");
//     return 0;
// }



// example of ternary operator

#include <stdio.h>

int main() {
    int age;
    printf("Enter Your Age :  ");
    scanf("%d", &age);

        age >=18 ? printf("You are adult\n") : printf("You are not adult\n");
        return 0;
}

