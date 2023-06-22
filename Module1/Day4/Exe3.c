#include<stdio.h>
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    
    while(start < end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        
        start++;
        end--;
    }
}
void main(){
    int size;
    printf("size=");
    scanf("%d",&size);
    int arr[size];
    printf("enter elements:");
    for(int i=0 ; i<size ;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,size);
    printf("display reversed array:");
    for(int j=0 ; j<size ;j++){
        printf("%d\n",arr[j]);
    }
}