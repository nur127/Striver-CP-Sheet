#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np,total_drinks , total_salt , total_slice ,total;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;

    total_drinks = k*l ;
    total_drinks = total_drinks / nl;

    total_slice = c*d ;

    total_salt = p / np ;

    total = total_drinks ;


    if(  total_slice < total &&  total_slice <= total_salt)
    {
        total =  total_slice ;
    }

    else if (total_salt < total && total_salt < total_slice){
        total = total_salt ; 

    }

    total = total / n ;

    cout << total ;

}
