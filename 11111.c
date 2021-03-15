#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    if(n>=1&&n<=10000)
    {
        char m[n][1000],g[n][1000];
        for(i=0; i<n; i++)
            scanf(" %[^\n]s",m[i]);

        for(i=1; i<n; i++)
            for(j=0; j<i; j++)
            {
                for(k=0; k<1000;)
                {
                    if(m[i][k] < m[j][k])
                    {
                        strcpy(g[i],m[j]);
                        strcpy(m[j],m[i]);
                        strcpy(m[i],g[i]);
                        break;
                    }
                    else if(m[i][k] == m[j][k])
                    {
                        k++;
                    }
                    else break;
                }
            }

        for(i=0; i<n; i++)
            printf("%s\n",m[i]);

    }
}
