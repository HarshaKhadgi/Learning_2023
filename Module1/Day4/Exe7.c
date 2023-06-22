#include<stdio.h>
#include<stdlib.h>
int convert(char *str){
    return atoi(str);
}
int main(){
    char str[100];
    printf("Enter string:");
    fgets(str,sizeof(str),stdin);
    int intvalue=convert(str);
    printf("converted=%d",intvalue);
}
