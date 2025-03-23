// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int temp =a;
//     a=b;
//     b=temp;
//     printf(" %d is a and %d is b",a,b);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("%d is a and %d is b",a,b);
// }

// #include <stdio.h>

// void swapByValue(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("Inside swapByValue: a = %d, b = %d\n", a, b);
// }

// void swapByReference(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x = 10, y = 20;

//     printf("Before swapByValue: x = %d, y = %d\n", x, y);
//     swapByValue(x, y);
//     printf("After swapByValue: x = %d, y = %d (No change in main)\n", x, y);

//     printf("\nBefore swapByReference: x = %d, y = %d\n", x, y);
//     swapByReference(&x, &y);
//     printf("After swapByReference: x = %d, y = %d (Values swapped in main)\n", x, y);

//     return 0;
// }
