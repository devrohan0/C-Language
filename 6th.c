// pointer : A variable that stores the memory address of another variable


#include <stdio.h>
int main(){
    int age=22;
    int *ptr = &age;  // "*" value at adress   and "&"  address of
    int _age = *ptr;
    //printf("%d\n", _age);
   printf("%u\n",&age); // address
   printf("%u\n",ptr);
   printf("%u\n",&ptr); // address of ptr
    return 0;
}