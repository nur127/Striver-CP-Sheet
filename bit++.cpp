#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; 
    string x;
    cin >> n ;
    int X = 0 ;

     for ( int i = 0 ; i < n ; i++){

        cin >> x;

        if( x[0] == '+' || x[1] =='+'){
            X++;
        }
        else{
            X--;
        }

     }
     cout << X ;
     return 0 ;
}