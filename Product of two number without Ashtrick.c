#include <stdio.h>
int main()
{
    int first,second,product=0;
    printf("Enter first and second number : ");//2 3
    scanf("%d %d",&first,&second);
    for(second>0;second--;)//3>0;3-1=2
    {
        product += first;//2+2+2=6
    }
    printf("%d",product);//6
}


