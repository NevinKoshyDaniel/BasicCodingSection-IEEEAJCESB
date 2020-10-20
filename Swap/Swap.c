#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping\n");
    printf("First number=%d\n",a);
    printf("Second number=%d",b);


}
