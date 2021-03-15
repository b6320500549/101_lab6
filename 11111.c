#include<stdio.h>
int main()

{
   int n,i,j;
   scanf("%d",&n);
   if(n>=1&&n<=10000)
   {
      char m[n][1000];
   for(i=0;i<n;i++)
   {
       scanf(" %[^\n]s",m[i]);
   }
   for(j=0;j<26;j++)
   {
   for(i=0;i<n;i++)
   {
        {
            if((m[i][0]==65+j)||(m[i][0]==97+j))
                printf("%s\n",m[i]);
        }
   }

   }

   }

}
