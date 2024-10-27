#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int l[n],g[n],c=0,b=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&l[i]);
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&g[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(l[i]>g[i])
            {
                c=1;
            }
            if(l[i]>g[n-i-1])
            {
                b=1;
            }
        }
        if(c==1 && b==1)
        {
            printf("none\n");
        }
        else if(c==0 && b==0)
        {
            printf("both\n");
        }
        else if(b==0)
        {
            printf("back\n");
        }
        else
        {
            printf("front\n");
        }
    }
	// your code goes here

}

