#include <bits/stdc++.h>
using namespace std ;

int main (){
    long long int n ;
    int rem ,count = 0;
    cin>>n ;

    while (n != 0){
        rem = n%10 ;
        n = n/10 ;

        if(rem == 4 || rem == 7){
            count ++ ;

        }

    }

    if ( count == 4 || count == 7){
        cout << "YES" ;
    }
    else {
        cout << "NO";
    }
}