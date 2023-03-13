// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter Number :");
//     scanf("%d",&n);

//     int sum=0;
//     for(int i=1; i<=n; i++){
//         sum=sum+i ; // or sum +=1
//     }
// printf("sum is %d\n",sum);
// for(int i=n; i>=1; i--){
//    printf("%d\n",i);
// }
//     return 0;
// }

// displaying table number entered by thr user

#include <stdio.h>

int main(){
    int n;
    printf("enter the desired table number :");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        printf("%d\n",n*i);
    }
return 0;
}