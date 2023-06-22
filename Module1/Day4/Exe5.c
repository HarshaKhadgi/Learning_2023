#include<stdio.h>
void Binary(int num){
    int arr[32];
    int index=0;
    
    while(num>0){
        arr[index]=num%2;
        num/=2;
        index++;
    }
    for(int i=index-1 ; i>=0 ;i--){
        printf("%d",arr[i]);
    }
}
void Octal(int num){
    int arr[32];
    int index=0;
    
    while(num>0){
        arr[index]=num%8;
        num/=8;
        index++;
    }
    
    for(int i=index-1 ; i>=0 ;i--){
        printf("%d",arr[i]);
    }
}
void Hexadecimal(int num) {
    char hex[32];
    int index = 0;

    while (num > 0) {
        int remainder = num % 16;
        if (remainder < 10) {
            hex[index] = remainder + '0';
        } else {
            hex[index] = remainder - 10 + 'A';
        }
        num /= 16;
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }
}
void main(){
    int decimal_no;
    printf("enter decimal number:");
    scanf("%d",&decimal_no);
    printf("Binary=");
    Binary(decimal_no);
    printf("\nOctal=");
    Octal(decimal_no);
    printf("\nHexadecimal=");
    Hexadecimal(decimal_no);
}