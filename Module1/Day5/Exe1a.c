#include<stdio.h>
struct mystructures{
    int l,b,h;
};
int main(){
    struct mystructures s;
    struct mystructures* ptr=&s;
    printf("enter length:");
    scanf("%d",&s.l);
    printf("enter breadth:");
    scanf("%d",&s.b);
    printf("enter height:");
    scanf("%d",&s.h);
    int volume=(s.l)*(s.b)*(s.h);
    printf("volume=%d\n",volume);
    int surface=(2*(s.l)*(s.b))+(2*(s.l)*(s.h))+(2*(s.b)*(s.h));
    printf("total surface area=%d",surface);
}