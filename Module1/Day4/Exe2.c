#include<stdio.h>
void min_max(int arr[],int size,int *min,int *max){
     *min=arr[0];
     *max=arr[0];
    
    for(int i=0 ; i<size ;i++){
        if(arr[i]<*min){
            *min=arr[i];
        }
        if(arr[i]>*max){
            *max=arr[i];
        }
    }
}
void main(){
    int size;
    printf("enter size:");
    scanf("%d",&size);
    printf("Enter elements:");
    int arr[size];
    for(int i=0 ;i <size ;i++){
        scanf("%d",&arr[i]);
    }
    
    int min,max;
    min_max(arr,size,&min,&max);
    
    printf("minimum number=%d\n",min);
    printf("Maximum number=%d",max);
}