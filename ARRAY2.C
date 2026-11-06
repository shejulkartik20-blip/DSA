#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],n,i,max,min;
  clrscr();
  printf("enter the limit");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  max=a[0];
  min=a[0];
  for(i=1;i<n;i++)
  {
   if(a[i]>max)

    max=a[i];

   if(a[i]<min)

    min=a[i];
  }
   printf("number is maximum=%d",max);
   printf("number is minimum=%d",min);
   getch();
   }
