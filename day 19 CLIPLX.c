#include <stdio.h>
int main(void) {
	int test_case ;
	scanf("%d",&test_case) ;
	while ( test_case-- ) {
	    int needs_points , numMatches ;
	    scanf("%d %d",&needs_points,&numMatches) ;
	    if ( needs_points > numMatches ) printf("%d\n",needs_points-numMatches) ; 
	    else printf("%d\n",0) ;
	}
}

