#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n); // size of array
    int arr[n],rotated[n];
    // input array elements
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // input the number of positions to rotate
    scanf("%d",&k);
    k=k%n; //in case k is larger
    //calculate new positions and store in rotated array
    for(int i=0;i<n;i++){
        int  newposition= (i+k)%n; 
        rotated[newposition]=arr[i];
    }
    // print 
    for (int i=0;i<n;i++){
        printf("%d ",rotated[i]);
    }


}