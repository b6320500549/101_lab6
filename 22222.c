#include<stdio.h>
int main()

{
   int n,i,j,p=0,k=0;
   scanf("%d",&n);
   if(n>=4&&n<=9)
   {
     char m[2][n];
   for(i=0;i<2;i++)
   {
       scanf(" %[^\n]s",m[i]);
   }
   for(j=0;j<n;j++)
   {
       if(m[0][j]== m[1][j])
         p++;
       else k++;
   }
   printf("%d %d",p,k);

   }
}
