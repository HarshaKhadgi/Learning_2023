#include<stdio.h>
void main(){
    int A[10],n,sum=0,avg;
    printf("How many numbers you want to add:");
    scanf("%d",&n);
    printf("Enter numbers:");
    for(int i=0 ; i<n ;i++){
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    avg=sum/n;
    printf("Sum=%d\n",sum);
    printf("Average=%d",avg);
}