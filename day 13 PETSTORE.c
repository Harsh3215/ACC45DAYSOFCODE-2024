
#include<stdio.h>
int compare(const void *x_void,const void *y_void)
{
    int x=*(int *)x_void;
    int y=*(int *)y_void;
    return x-y;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,temp;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        qsort(a,n,sizeof(int),compare);
    if(n%2!=0)
    {
        printf("NO\n");
    }
    else{
        int i=0;
        for(;i<n;i=i+2)
        {
            if(a[i]!=a[i+1])
            {
                printf("NO\n");
                break;
            }
        }
        if(i==n)
        {
            printf("YES\n");
        }
        
    }
    }
    return 0;
}