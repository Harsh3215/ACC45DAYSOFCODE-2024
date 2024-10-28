#include <stdio.h>
int main(void) {
    int test_case ;
    scanf("%d",&test_case) ;
    while ( test_case-- ) {
        char InpStr[201] ;
        scanf("%s",InpStr) ;
        int temp[201] ;
        for ( int i = 0 ; i < 201 ; i++ ) temp[i] = 0 ;
        for ( int i = 0 ; i < strlen(InpStr) ; i++ ) {
            temp[InpStr[i]-65]++ ;
        }
        int total_cost = 0 ;
        for ( int i = 0 ; i < 201 ; i++ ) {
            if ( temp[i] != 0 && temp[i] % 2 == 0 ) total_cost += ( temp[i] / 2 ) ;
            else total_cost += ( ( temp[i] + 1 ) / 2 ) ;
        }
        printf("%d\n",total_cost) ;
    }
}

