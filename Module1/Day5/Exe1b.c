#include<stdio.h>
struct mystructures{
    int l,b,h;
};
int main(){
    struct mystructures s;
    struct mystructures* ptr=&s;
    printf("enter length:");
    scanf("%d",&ptr->l);
    printf("enter breadth:");
    scanf("%d",&ptr->b);
    printf("enter height:");
    scanf("%d",&ptr->h);
    int volume=(ptr->l)*(ptr->b)*(ptr->h);
    printf("volume=%d\n",volume);
    int surface=(2*(ptr->l)*(ptr->b))+(2*(ptr->l)*(ptr->h))+(2*(ptr->b)*(ptr->h));
    printf("total surface area=%d",surface);
}