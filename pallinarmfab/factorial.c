// #include<stdio.h>
// int main(){
//     int n,fact=1;
//     scanf("%d",&n);
//     if(n==0){
//         printf("1");
//     }
//     else{
//         for(int i=1;i<=n;i++){
//             fact=fact*i;
//         }
//         printf("%d",fact);
//     }

// }

// #include<stdio.h>

// int main() {
//     int start, end, fact;

//     // Taking input for the range
//     printf("Enter the range (start end): ");
//     scanf("%d %d", &start, &end);

//     // Loop through the range and calculate the factorial for each number
//     for (int n = start; n <= end; n++) {
//         fact = 1; // Reset the factorial to 1 for each number
        
//         // Special case for 0, factorial of 0 is 1
//         if (n == 0) {
//             fact = 1;
//         } else {
//             // Calculate factorial using a loop
//             for (int i = 1; i <= n; i++) {
//                 fact *= i;
//             }
//         }

//         // Print the factorial of the current number
//         printf("Factorial of %d is %d\n", n, fact);
//     }

//     return 0;
// }



// #include<stdio.h>
// int  main()
// {
//     int start,end,fact=1;
//     scanf("%d %d",&start,&end);
//     for(int i=start;i<=end;i++){
//         fact=1;
//         if(i==0){
//             fact=1;
//         }
//         else{
//             for(int j=1;j<=i;j++){
//                 fact=fact*j;
//             }
//         }
//         printf("%d\n",fact);
//     }
// }



