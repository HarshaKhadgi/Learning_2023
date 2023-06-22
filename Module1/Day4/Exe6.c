#include<stdio.h>
#include<ctype.h>
void toggle(char *str){
    for(int i=0 ; str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-'a'+'A';
        else if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]-'A'+'a';
    }
}
void toggle_using_function(char *str){
    while(*str!='\0'){
        if(islower(*str)){
            *str=toupper(*str);
        }
        else if(isupper(*str)){
            *str=tolower(*str);
        }
        str++;
    }
}
void main(){
    char str[100];
    printf("Enter String:");
    scanf("%s",str);
    
    toggle(str);
    printf("toggled case=%s\n",str);
    toggle(str);
    printf("Original=%s\n",str);
    toggle_using_function(str);
    printf("\ntoggled case using function=%s",str);
}