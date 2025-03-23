// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     int i, len, isPalindrome = 1;

//     // Input string from user
//     printf("Enter a string: ");
//     scanf("%s", str);

//     len = strlen(str); // Get length of string

//     // Check palindrome using a loop
//     for (i = 0; i < len / 2; i++) {
//         if (str[i] != str[len - i - 1]) {
//             isPalindrome = 0; // Not a palindrome
//             break;
//         }
//     }

//     // Print result
//     if (isPalindrome) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is NOT a palindrome.\n");
//     }

//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// int main(){
//     int i,len,ispallindrome=1;
//     char str[100];
//     printf("enter the string");
//     scanf("%s",str);
//     len=strlen(str);
//     for(i=0;i<=len/2;i++){
//         if(str[i]!=str[len-i-1]){
//             ispallindrome=0;
//             break;
//         }
//     }
//     if(ispallindrome){
//         printf("a pallindrome");
//     }
//     else{
//         printf("not a pallindrome ");
//     }

// }


