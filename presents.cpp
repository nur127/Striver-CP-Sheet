#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ,i;
    cin>>n ;
    int a[n+1] , p[n+1];

    for(int i = 1 ; i<= n ; i++){
        cin >> a[i];
        p[a[i]] = i ;
    }

    for( i = 1 ; i <= n ; i++){
        cout << p[i] <<" ";
    }

    return 0 ;
}