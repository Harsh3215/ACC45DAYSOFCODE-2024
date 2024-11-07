
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,k;
        scanf("%d%d",&l,&k);
        if(l%k==0){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }

}
