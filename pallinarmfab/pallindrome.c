// #include<stdio.h>
// int main(){
//     int n,temp,r,s=0;
//     printf("enter number:");
//     scanf("%d",&n);
//     temp=n;
//     while(n>0){
//         r=n%10;
//         s=r+(s*10);
//         n=n/10;
//     }
//     (temp == s )?printf("pallindrome"):printf("not a pallindrome");

// }


// // pallindrome in a range
// #include<stdio.h>
// int main(){
//     int start,end,i,s,r,temp;
//     printf("enter range");
//     scanf("%d %d ",&start,&end);
//     for(i=start;i<=end;i++){
//         temp=i;
//         s=0;
//         while(i>0){
//             r=i%10;
//             s=r+(s*10);
//             i=i/10;
//         }
//         if (temp==s)
//         {printf("%d\n",temp);}
//         i=temp;//reset the number for next iteration

//     }
//     return 0;
// }


#include<stdio.h>

int main() {
    int start, end, i, s, r, temp;
    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    for(i = start; i <= end; i++) {
        temp = i;   // Store the original number in temp
        s = 0;

        // Check if the number is a palindrome
        while(temp > 0) {
            r = temp % 10;   // Extract the last digit
            s = r + (s * 10); // Reversing the digits
            temp = temp / 10; // Remove the last digit
        }

        // If the original number is equal to the reversed number, it's a palindrome
        if(i == s) {
            printf("%d\n", i);
        }
    }

    return 0;
}
