#include<stdio.h>
#include<stdbool.h>
int main(void) {
    int test_case ;
    scanf("%d",&test_case) ;
    while ( test_case-- ) {
        int size ;
        scanf("%d",&size) ;
        int arr[size] ;
        for ( int i = 0 ; i < size ; i++ ) {
            scanf("%d",&arr[i]) ;
        }
        for ( int i = 1 ; i < size ; i++ ) {
            int j = i ;
            while ( j > 0 ) {
                if ( arr[j] < arr[j-1] ) {
                    int temp = arr[j] ;
                    arr[j] = arr[j-1] ;
                    arr[j-1] = temp ;
                    j-- ;
                }
                else break ;
            }
        }
        int operations = 0 ;
        bool flag = true ;
        for ( int i = 0 ; i < size ; i++ ) {
            if ( arr[i] > i + 1 ) {
                flag = false ;
                break ;
            }
            else {
                operations += ( i + 1 ) - arr[i] ;
            }
        }
        if ( flag == false ) printf("%d\n",-1) ;
        else printf("%d\n",operations) ;
    }
}

