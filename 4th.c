/* There are 3 types of loops 
1) for
2) while
3) do while 
Increment operator and decrement operator
1) pre-increment operator[++i]
2) post-increment operator[i++]
1) pre-decrement[--i]
2) post-decrement[i--]
*/



// example of for loop

// #include <stdio.h>

// int main() {
    // for(int i=1; i<=12; i++){
    //     printf("%d\n", i);

// print the number from 0 to n if n is given by user
// int n;
// printf("Enter the number where you want to stop : ");
// scanf("%d",&n);

// for(int i=0; i<=n; i++){
//     printf("%d\n",i);
// }
// 

    // for(int i=1; i<=10; i++){
        // printf("Hello world\n");
    // }
// return 0;
// }

//while loop example

// #include <stdio.h>

// int main(){
//     int i=0;
//     while(i<=8){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

//print the number from 0 to n if n is given by user

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number where you want to stop :");
//     scanf("%d",&n);
//     int i=0;
//     while(i<=n){
//         printf("%d\n",i);
//         i++;
//     }
// }

// Do While Loop Examples

#include <stdio.h>

int main () {
    int i=10;
    do{
        printf("%d\n",i);
        i-- ;
    } while(i>=0);
    return 0;
}