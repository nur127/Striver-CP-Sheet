#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n , k ;
    cin>>n >> k ;

    for (int i = 0 ; i<k && n!=0 ; i++){

        if ( n%10 == 0 ){
            n = n/10 ;
        }
        else{
            n--;
        }
    }
    cout << n ;
    return 0 ;
}