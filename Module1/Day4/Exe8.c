#include<stdio.h>
void main(){
    int h,m,s;
    printf("enter hours minutes and seconds in tab : ");
    scanf("%d%d%d",&h,&m,&s);
    int total=(h*3600)+(m*60)+s;
    printf("Total seconds=%d",total);
}