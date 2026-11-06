#include<stdio.h>
void main()
{
 int a[5][5],i,j,c,r,sum=0;
 printf("enter row");
 scanf("%d",&r);
 printf("enter col");
 scanf("%d",&c);
 printf("enter the accept matrix");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
  scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
  if(a[i][j]%2==0)
  {
   sum=sum+a[i][j];
   }
   }
   }
   printf("even number sum =%d",sum);
   }