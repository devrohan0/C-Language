// Function And recursion

#include <stdio.h>

// function prototype
void printHello();
void printGoodbye();
int main() {
printHello();  // calling a function
printGoodbye();
return 0;
}

// function defination
void printHello(){ 
    printf("Hello World!\n");
}

void printGoodbye(){
    printf("Goodbye:)\n");
}