#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]%k==0){
                printf("1");
            }
            else{
                printf("0");
            }
      
        }
              printf("\n");
    }

}

