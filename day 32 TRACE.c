#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        int x=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int p=i,q=j,s=0;
                while(p<n && q<n)
                {
                    s+=a[p][q];
                    p++;
                    q++;
                }
                x=s>x?s:x;
            }
        }
        printf("%d\n",x);
    }
    return 0;
}
