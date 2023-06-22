#include<stdio.h>
void main(){
    int even=0,odd=0,size;
    printf("size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ; i<size ;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }
    }
    int diff;
    printf("even=%d\n",even);
    printf("odd=%d\n",odd);
    if(even>odd)
    diff=even-odd;
    else if(even==odd)
    diff=0;
    else
    diff=odd-even;
    printf("Diff=%d",diff);
}