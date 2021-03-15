#include<stdio.h>
int main()

{
   int n,i,j;
   scanf("%d",&n);
   if(n>=4&&n<=9)
   {
     char m[2][n];
   for(i=0;i<2;i++)
   {
       for(j=0;j<n;j++)
   {
       scanf(" %[^\n]s",m[i]);
   }
   }

   }
}
