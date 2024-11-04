#include <stdio.h>
int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res ^= arr[i];
    return res;
}

int main(void) {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    long long int N;
	    scanf("%lld",&N);
	    int a[1000000];
	    for(int j=0;j<N;j++){
	        scanf("%d",&a[j]);}
	        
	    int num = findOdd(a, N);
	    if(num==0)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	    
	}
	return 0;
}


/*alternative method
#include <stdio.h>
int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res ^= arr[i];
    return res;
}

int main(void) {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    long long int N;
	    scanf("%lld",&N);
	    int a[100000],b[100000];
	    for(int j=0;j<N;j++)
	        scanf("%d",&a[j]);
	        
	    for(int j=0;j<N;j++)
	    {
	        int count=0 ;
	        for(int k=0;k<N;k++)
	        {
	            if(a[j]==a[k])
	            {
	                count++;
	            }
	        }b[j]=count ;
	    }
	    int flag=0;
	    for(int j=0;j<N;j++)
	    {
	        if(b[j]%2==0)
	        {
	            flag=1;
	        }
	        else
	        {
	            flag=0;
	            printf("NO\n");
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        printf("YES\n");
	    }
	        
	    
	}
	return 0;
}

*/
