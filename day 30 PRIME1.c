#include <stdio.h>
#include<math.h>
void prime(int m,int n)
{
    int count=1;;
    for(int i=m;i<=n;i++)
    {
        count=0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                count=1;
                break;
            }
        }
        if(count == 0 && i!=1)
            printf("%d\n",i);
    }
}
int main(){
    int t;
    scanf("%d",&t);
    int k=0;
    while(k<t)
    {
        int n,m;
        scanf("%d%d",&m,&n);
        prime(m,n);
        printf("\n");
        k++;
    }
}

