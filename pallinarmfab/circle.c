#include<stdio.h>
float area_(float radius);
float perimeter(float radius );

int main(){
float radius ,area ,cir;
scanf("%f",&radius);
area= area_(radius);
printf("area is %.2f\n",area);
cir = perimeter(radius);
printf("%.2f is circumference\n",cir);
}
float area_(float radius){
    return 3.14 * radius * radius;

}
float perimeter(float radius){
    return 2 * 3.14 * radius;
}