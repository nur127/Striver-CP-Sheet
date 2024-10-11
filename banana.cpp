#include <bits/stdc++.h>
using namespace std ;

int main (){
    int k,n,w,sum = 0,ans;

    cin  >> k >> n >>w ;

    for ( int i = 1 ; i <= w ; i++){
        sum = sum + i*k ;
    }
   if (sum > n ){
    cout << abs(sum-n);
    return 0 ;
   }

    cout << 0 ;


    return 0;
}