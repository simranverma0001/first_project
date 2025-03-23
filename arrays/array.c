// #include<stdio.h>
// int main(){
    // int marks[3];
    // scanf("%d",&marks[0]);
    // scanf("%d",&marks[1]);
    // scanf("%d",&marks[3]);
    // printf("maths %d  physics %d  chemistry%d",marks[0],marks[1],marks[3]);

// float price[3];
// printf("enter the prices :");
// scanf("%f",&price[0]);
// scanf("%f",&price[1]);
// scanf("%f",&price[2]);
// printf("total price 1: %f\n",price[0]+(0.18*price[0]));
// printf("total price 1: %f\n",price[1]+(0.18*price[1]));
// printf("total price 1: %f",price[2]+(0.18*price[2]));

// }


#include<stdio.h>
  int countodd(int arr[], int n);
  int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    printf("%d",countodd(arr,10));
  }
  int countodd(int arr[], int n) 
  {
    int count=0;
    for (int i=0; i<n;i++){
        if (arr[i] %2 !=0){
            count++;
        }
    }
    return count;

  }
    
