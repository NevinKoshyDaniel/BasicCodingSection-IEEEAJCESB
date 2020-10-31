#include<stdio.h>
void main()
{   
    int choice,a[5], i,j,search,index,flag ,swap,low,high,mid;
    printf("\nMENU \n1.LINEAR SEARCH\n2.BINARY SEARCH\n3.EXIT\n");
    while(1)
    {
    printf("\nENTER THE CHOICE\n");
    scanf("%d",&choice);
    if(choice==1)
    {
     printf("ENTER THE ELEMENTS OF ARRAY : ");
     for(i=0;i<5;i++)
     {
        scanf("%d",&a[i]);
     }
     printf("\nENTER THE NUMBER TO BE SEARCHED : ");
     scanf("%d",&search);
     i=0;
     flag=0;
     while((i<5)&&(flag==0))
     {
        if(a[i]==search)
        {
            flag=1;
            index=i;
        }
     i=i+1;    
     }
     if(flag==1)
     {
        printf("\nTHE ELEMENT IS LOCATED AT %dth POSITION\n",index+1);
     }
     else
     {
        printf("\nELEMENT IS NOT FOUND\n");
     }
 }


else if(choice==2)
{
    printf("\nENTER THE ELEMENTS OF ARRAY : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
   for (i=0;i<5;i++)
   {
    for (j=0;j<5-i-1;j++)
    {
      if (a[j] > a[j+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = a[j];
        a[j]   = a[j+1];
        a[j+1] = swap;
      }
    }
  }

  printf("SORTED ARRAY :\n");

  for (i=0;i<5;i++)
  {
     printf(" %d  ", a[i]);
  }



    printf("\nENTER THE NUMBER TO BE SEARCHED : ");
    scanf("%d",&search);
    low=0;
    high=4;
    mid=(low+high)/2;
    while((search!=a[mid])&&(low<high))
    {
        if(search>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    if(search==a[mid])
    {
        printf("\nELEMENT IS PRESENT AT %dth POSITION \n",mid+1);
    }
    else
    {
        printf("\nELEMENT IS NOT FOUND\n");
    }
}

else if(choice==3)
{
    exit (0);
}
}
}

