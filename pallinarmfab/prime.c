// #include <stdio.h>
// int main()
// {
//     int num , count=0, i ;
//     printf("enter number:");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         if((num%i)==0){
//             count++;
//         }
//     }
//     if (count == 2){
//         printf("prime number");
//     }
//     else{
//         printf("not a prime number");
//     }
// }


// #include<stdio.h>
// int main(){
//     int n,count=0;
//     printf("enter a number");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//     if(count==2){
//         printf("prime");
//     }
//     else{
//         printf("not a prime");
//     }

// }



// #include<stdio.h>

// int main() {
//     int start, end, count, n;

//     // Taking input for the range
//     printf("Enter range (start end): ");
//     scanf("%d %d", &start, &end);

//     // Loop through the numbers in the specified range
//     printf("Prime numbers in the range %d to %d are:\n", start, end);
//     for (n = start; n <= end; n++) {
//         count = 0; // Reset count for each number

//         // Check if the current number is prime
//         for (int i = 1; i <= n; i++) {
//             if (n % i == 0) {
//                 count++;
//             }
//         }

//         // If the number has exactly two divisors, it's prime
//         if (count == 2 && n > 1) {
//             printf("%d ", n);
//         }
//     }

//     return 0;
// }




#include<stdio.h>
int main(){
    int start ,end , n,count;
    scanf("%d %d",&start,&end);
    for(int n=start;n<=end;n++){
        count=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==2 && n>1){
            printf("%d ",n);
        }

    }
}
