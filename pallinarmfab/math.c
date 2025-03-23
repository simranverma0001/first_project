// #include<stdio.h>
// #include<math.h>
// int main(){
//     float num,result;
//     printf("enter number");
//     scanf("%f",&num);
//     if(num<0){printf("error");}
//     else{
//         result=sqrt(num);
//         printf("square root is %.2f",result);
//     }
// }


#include<stdio.h>
#include<math.h>
int main(){
    float num,result;
    printf("enter number");
    scanf("%f",&num);
    printf("floor is %f",floor(num));
    printf("ceiling is %f",ceil(num));
}

