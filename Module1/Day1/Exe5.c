#include<stdio.h>
int bit_operators(int num,int op_type){
    switch(op_type){
        case 1:
        num |= (1<<0);
        break;
        case 2:
        num &= ~(1<<31);
        break;
        case 3:
        num ^= (1<<15);
        break;
        default:
        printf("invalid operator");
        break;
    }return num;
}
int main(){
    int num,op_type;
    printf("NEter numbr of 32 bit:");
    scanf("%d",&num);
    printf("enter operator type 1 2 or 3:");
    scanf("%d",&op_type);
    int result=bit_operators(num,op_type);
    if(result!=-1)
    printf("Result=%d",result);
    return 0;
}