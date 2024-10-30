#include <stdio.h>
int main(void) {
	int test_case ;
	scanf("%d",&test_case) ;
	while ( test_case-- ) {
	    unsigned long long size ;
	    scanf("%llu",&size) ;
	    unsigned long long arr_A[size] , arr_B[size] ; 
	    for ( int i = 0 ; i < size ; i++ ) {
	        scanf("%llu",&arr_B[i]) ;
	    }
	    unsigned long long sum_B = 0 ;
	    for ( int i = 0 ; i < size ; i++ ) {
	        sum_B += arr_B[i] ;
	    }
	    unsigned long long temp = sum_B / ( size + 1 ) ;
	    for ( int i = 0 ; i < size ; i++ ) {
	        arr_A[i] = arr_B[i] - temp ;
	    }
	    for ( int i = 0 ; i < size ; i++ ) {
	        printf("%llu ",arr_A[i]) ;
	    }
	    printf("\n") ;
	}
}

