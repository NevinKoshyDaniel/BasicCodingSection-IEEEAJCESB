#include<stdio.h>

void main()
{
  int a,b;
  printf("ENTER THE TWO NUMBERS: ");
  scanf("%d%d",&a,&b);
  printf("BEFORE SWAPPING: A: %d  B:%d\n",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("AFTER SWAPPING: A: %d  B:%d\n",a,b);
}
