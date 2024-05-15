#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string n ;
    cin >> n ;
    int count = 0 ;
    char equal[0] = n[0] ;
    for ( int i = 1 ; i < n.length() ; i++ )
    {
        if ( equal[0] == n[i] )
        {
            count++;
        }
        else
        {
            equal[0] == n[i] ;
            count = 0 ;
        }
        
    }
    if ( count >= 7 )
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    
}
