#include <stdio.h>

int check(int limak, int bob)

{
    int caplimak=0, capbob=0;
    int i=1;
    while(caplimak <=limak && capbob<=bob)
    {
        
        caplimak+=i++;
        if(caplimak>limak)
        {
            break;
        }
        capbob+=i++;
        
    }
   if(capbob>bob)
    {
     
        return 1;
    }
    else
    {
        
        return 0;
    }
}
int main(void) {
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int b ,l;
	    scanf("%d",&l);
	    scanf("%d",&b);
	    int res=check(l,b);
	    if(res==1)
	        printf("\nLimak");
	    else
	        printf("\nBob");
	}
	return 0;
}

