#include <stdio.h>
int main(void) {
	// your code goes here
	int T,N;
	scanf("%d",&T);
	while(T--){
	    int max=0,temp;
	    scanf("%d",&N);
	    int arr[N];
	    for(int i=0;i<N;i++){
	        arr[i]=0;
	    }
	    for(int i=0;i<N;i++){
	        scanf("%d",&temp);
	        arr[temp-1]++;
	        max=(max<arr[temp-1])?arr[temp-1]:max;
	    }
	    printf("%d\n",N-max);
	}
	return 0;
}

