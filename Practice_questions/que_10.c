// write a progra to enter price of 3 items and print their final cost with GST

// #include <stdio.h>

// int main (){
//     float prices[3];

//     printf("enter prices  : ");
//     scanf("%f", &prices[0]);
//     scanf("%f",&prices[1]);
//     scanf("%f",&prices[2]);
// printf("Total price of 1 : %f\n",prices[0]+(0.18*prices[0]));
// printf("Total price of 2 : %f\n", prices[2]+(0.18*prices[1]));
// printf("Total price of 3 : %f\n",prices[2]+(0.18*prices[2]));

// return 0;

// }


#include <stdio.h>

int countOdd(int arr[], int n);

int main(){
int arr[]= {1,2,3,4,5,6};
printf("%d\n", countOdd(arr,6));
return 0;
}

int countOdd(int arr[], int n){
    int count=0;
    for(int i =0; i<n; i++){
        if(arr[i] % 2 !=0){
            count++;
        }
    }
    return count;
}