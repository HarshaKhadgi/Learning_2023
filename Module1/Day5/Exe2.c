#include<stdio.h>
struct complex{
    int a,b,x,y;
};
int write(struct complex c){
    
    printf("first complex number=%d+%di\n",c.a,c.b);
    printf("Second complex number=%d+%di\n",c.x,c.y);
}
   int add(struct complex c){
       int m=(c.a)+(c.x);
       int n=(c.b)+(c.y);
       printf("Addition = %d+%di\n",m,n);
    
   }
   int mul(struct complex c){
       int m=(c.a)*(c.x);
       int n=(c.b)*(c.y);
       printf("Multiplication = %d+%di",m,n);
    
   }
int main(){
    struct complex c;
    struct complex* ptr=&c;
    printf("reading:");
    printf("Enter first number a1=");
    scanf("%d",&c.a);
    printf("Enter b1=");
    scanf("%d",&c.b);
    printf("Enter second number a2=");
    scanf("%d",&c.x);
    printf("enter b2=");
    scanf("%d",&c.y);
    write(c);
    add(c);
    mul(c);
    return 0;
}