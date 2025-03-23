// WAP to display multiplication table from 1 to 10

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number:");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d X %d = %d\n",n,i,n*i);
//     }
//     return 0;

// }


// // WAP to find factorial of 1st 10 numbers.
// #include<stdio.h>
// int main(){
//     int n;
//     int fact;
//     printf("enter a nnumber:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         fact=1;
//         for(int j=1;j<=i;j++){
//             fact=fact*j;
//         }
//         printf("factorail of %d is %d\n",i,fact);
//     }
    
//     return 0;
// }


// // WAP to find factorial of 1st 10 numbers.
// #include<stdio.h>
// int main(){
//     int n;
//     int fact;
//     printf("enter a nnumber:");
//     scanf("%d",&n);
//     if(n==0 || n==1){
//         printf("1");
//     }
//     for(int i=1;i<=n;i++){
//         fact=1;
//         fact=fact*i;
//     }
//     printf("%d\n",fact);
//     return 0;
// }



// // 3. Print Prime number in a given range
// #include<stdio.h>
// int main(){
//     int n,count=0;
//     printf("enter number:");
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
//     int start, end;

//     // Get the range from the user
//     printf("Enter the range (start and end): ");
//     scanf("%d %d", &start, &end);

//     // Loop through each number in the range
//     for (int n = start; n <= end; n++) {
//         int count = 0;

//         // Check if the number is prime
//         for (int i = 1; i <= n; i++) {
//             if (n % i == 0) {
//                 count++;
//             }
//         }

//         // If count is 2, the number is prime
//         if (count == 2) {
//             printf("%d is prime\n", n);
//         }
//     }

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int start,end;
//     scanf("%d %d",&start,&end);
//     for(int i=start;i<=end;i++){
//         int count=0;
//         for(int j=1;j<=i;j++){
//             if(i%j==0){
//                 count++;

//             }
//         }
//         if(count==2){
//             printf("%d\n",i);
//         }
//     }
    

// }
