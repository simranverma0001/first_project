// // #include<stdio.h>
// // int main(){
// //     int a=5;
// //     printf("%-5d");
// // }


// #include<stdio.h>
// int main(){
//     int num,rem,q,result=0;
//     scanf("%d",&num);
//     q=num;
//     while(q>0){
//         rem=q%10;
//         result=(result*10)+rem;
//         q=q/10;

//     }
//     result==num?printf("pallindrome"):printf("not");
// }



// #include<stdio.h>
// int main(){
//     int i=2,j=3,k,p;
//     float a,b;
//     k=i/j*j;
//     p=j/i*i;
//     a=i/j*j;
//     b=j/i*i;
//     printf("%d %d %f %f",k,p,a,b);
// }


// for(i=n;i&gt;0;i--)
// for(i=n;i&gt;=0;i--)
// for(i=n-1;i&gt;0;i--)
// for(i=n-1;i&gt;-1;i--)


// #include<stdio.h>
// int main(){
//     int a=45.5;
//     printf("%d",a);
// }




// WAP to display multiplication table from 1 to 10. 

// 2. WAP to find factorial of 1 st 10 numbers.

// 3. Print Prime number in a given range

// 4. Find composite numbers between 2 to 1000

// 5. WAP to find input number is Armstrong or not.

// 6. Write a C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops.

// Write a C program to print even and odd numbers from 1-50 using 
// while, for and do-while
//  Write a C program to find the largest number among ten
//  Write a C program to print the series 1 1 2 3 5 8 13 21 upto 150
//  Write a C program to print the series 1 1 2 3 5 8 13 21 upto 150
//  Write a C program to reverse a 3-digit integer







// #include<stdio.h>
// int main()
// {
//     int i,n,f=1;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         f=f*i;
//     }
//     printf("%d",f);
// }




// #include<stdio.h>
// int main(){
//     int i,j,n,f;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         f=1;
//         for(j=1;j<=i;j++){
//             f=f*j;
//         }
//         printf("%d\n",f);
//     }
// }

// #include<stdio.h>
// int main(){
//     int start,end,i,j,count;
//     scanf("%d %d",&start,&end);
//     for(i=start;i<=end;i++){
//         count=0;
//         for(j=1;j<=i;j++){
//             if(i%j==0){ count++;}
           
//         }
//         if(count==2){
//             printf("%d\n",i);
//         }
//     }
// }




// #include<stdio.h>
// int main(){
//     int num,rem,q,result=0;
//     scanf("%d",&num);
//     q=num;
//     while(q>0){
//         rem=q%10;
//         result=(result*10)+rem;
//         q=q/10;

//     }
//     result==num?printf("pallindrome"):printf("not");
// }

 

// #include <stdio.h>

// int main() {
//     int i, j, count;

//     // Loop through numbers from 2 to 1000
//     for(i = 2; i <= 1000; i++) {
//         count = 0;  // Reset count of divisors for each number
        
//         // Check for divisors of i
//         for(j = 1; j <= i; j++) {
//             if(i % j == 0) {  // If j divides i, increment count
//                 count++;
//             }
//         }
        
//         // If the number has more than 2 divisors, it's a composite number
//         if(count > 2) {
//             printf("%d ", i);  // Print the composite number
//         }
//     }

//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int num,r,n,result=0;
//     scanf("%d",&num);
//     n=num;
//     while(n>0){
//         r=n%10;
//         result=(result*10)+r;
//         n=n/10;


//     }
//     if(result==num){
//         printf("pallindrome");

//     }
//     else{
//         printf("not");
//     }
// }



// #include<stdio.h>
// int main(){
//     int num,r,result=0,n;
//     scanf("%d",&num);
//     n=num;
//     while(n>0){
//         r=n%10;
//         result=(result*10)+r;
//         n=n/10;
//     }
//     if(num==result){
//         printf("pallinfrome");
//     }
//     else{
//         printf("not");
//     }
// }



// #include<stdio.h>
// int main(){
//     int n,a=0,b=1,c;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d",a);
//         c=a+b;
//         a=b;
//         b=c;

//     }return 0;
// }

#include <stdio.h>
int main()
{    extern int x;
    printf("Global variable: %d", x);
} 