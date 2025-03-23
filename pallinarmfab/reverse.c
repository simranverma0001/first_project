// #include<stdio.h>
// int reverse(int num,int rev){
//     if(num==0)
//     return rev;
//     rev = rev*10 + num%10;
//     return reverse(num/10,rev);
// }
// int main(){
//     int num;
//     printf("enter number");
//     scanf("%d",&num);
//     printf("reversed num is %d",reverse(num,0));
// }


#include<stdio.h>
void rev(int arr[],int n);
void printarr(int arr[],int n);
void rev(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstval= arr[i];
        int secondval = arr[n-i-1];
        arr[i] = secondval;
        arr[n-i-1] = firstval;
    }
}
int main()
{
int arr[] = { 1,2,3,4,5};
rev(arr,5);
printarr(arr,5);
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
        
    }
}

