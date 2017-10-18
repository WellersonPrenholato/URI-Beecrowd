#include<stdio.h>
  
int main( ) {
    int i, t, n, m, x, y;
    while ( scanf ( "%d", &t ) != EOF ) {
        if ( t == 0 ) return 0;
        scanf ( "%d %d", &n, &m );
        while ( t-- ) {
            scanf ( "%d %d", &x, &y );
            if ( x == n || y == m )  puts ( "divisa" );
            else if ( x > n && y > m ) puts ( "NE" );
            else if ( x > n && y < m ) puts ( "SE" );
            else if ( x < n && y > m ) puts ( "NO" );
            else if ( x < n && y < m ) puts ( "SO" );
        }
    }
}
