#include <stdio.h>
// using function 
void includeGST(float value); // declaring a function

int main(){
float value =100.0;
includeGST(value);
printf("actual value is : %f\n", value);
    return 0;
}

void includeGST(float value){
    value=value+(0.18*value);
    printf("Final price is : %f\n",value);
}