#include<stdio.h>
void Grade(){
    float P,C,M,B,E,total,per;
    printf("enter marks of five subjects:");
    scanf("%f %f %f %f %f",&P,&C,&M,&B,&E);
    total=P+C+M+B+E;
    per=(total/500)*100;
    if(per>90 && per<100)
    printf("Grade=A");
   else  if(per>75 && per<89)
    printf("Grade=B");
     else if(per>60 && per<74)
    printf("Grade=C");
     else if(per>50 && per<59)
    printf("Grade=D");
     else
    printf("Grade=E");
}
void main(){
    Grade();
}