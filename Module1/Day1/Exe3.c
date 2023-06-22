void percentage(){
    float P,M,C,total,per;
    
    printf("enter marks of physics:");
    scanf("%f",&P);
    printf("enter marks of Chemestry:");
    scanf("%f",&C);
    printf("enter marks of Maths:");
    scanf("%f",&M);
    total=P+M+C;
    per=(total/300)*100;
    printf("Percentage=%f",per);
}
void main(){
    int R;
    char str[20];
   
    printf("enter roll no:");
    scanf("%d",&R);
     printf("enter full name:");
     gets(str);
     
   percentage();
    
}