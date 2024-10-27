#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d", &t);
    while(t--){
        unsigned long long n;
        scanf("%lld", &n);
        
        unsigned long long guitar[n];
        for(int i=0; i<n; i++){
            scanf("%lld", &guitar[i]);
        }
        
        unsigned long long totalskips = 0;
        
        for(int i=0; i<n-1; i++){
            totalskips+=(abs(guitar[i+1]-guitar[i])-1);
        }
        printf("%lld\n", totalskips);
    }
}

