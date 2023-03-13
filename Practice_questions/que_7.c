// function and recurtion

#include <stdio.h>

// function prototpye

void namaste();
void bonjour();

int main(){
printf("Enter i for India and f for French :");
char ch;
scanf("%c", &ch);

if(ch=='i'){
    namaste();
}
else{
    bonjour();
}

    return 0;
}

void namaste(){
    printf("Namaste!\n");
}


void bonjour(){
    printf("Bonjour!\n");
}
