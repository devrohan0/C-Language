// #include <stdio.h>

// int sum(int a, int b);

// int main(){
//     int a,b;
//     printf("Enter First Number :");
//     scanf("%d",&a);
//     printf("Enter Second Number :");
//     scanf("%d",&b);

//     int s=sum(a,b);
//     printf("sum is :%d\n",s);
//     return 0;
// }

// int sum(int x, int y){
//     return x+y;
// }

//prinitng table number entered by the user [using function]

#include <stdio.h>


void printTable(int a);
int main(){
int a;
printf("Enter table number ");
scanf("%d",&a);

printTable(a); // argument/actual parameter
    return 0;
}

void printTable(int a){  // parameter/formal parameter
    for(int i=1; i<=10; i++){
        printf("%d\n",i*a);
    }
}