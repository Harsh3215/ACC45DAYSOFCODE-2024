#include <stdio.h>
int main(void) {
	int test_case ;
	scanf("%d",&test_case) ;
	while ( test_case-- ) {
	    int size ;
	    scanf("%d",&size) ;
	    char InpStr[size+1] , OutStr[size+1] ;
	    scanf("%s",InpStr) ;
	    int count = 0 ;
	    for ( int i = 0 ; i < size ; i++ ) {
	        if ( InpStr[i] == '1') count++ ;
	    }
	    char temp[count+1] ;
	    for ( int i = 0 ; i < count ; i++ ) {
	        temp[i] = '1' ;
	    }
	    for ( int i = 0 ; i < size - count ; i++ ) OutStr[i] = '0' ;
	    OutStr[size-count] = '\0' ;
	    strcat(OutStr,temp) ;
	    OutStr[size] = '\0' ;
	    printf("%s\n",OutStr) ;
	}
}

