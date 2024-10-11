#include <bits/stdc++.h>
using namespace std ;

int solve(string s){
    if(s == "Tetrahedron"){
        return 4 ;
    }
    else if (s == "Cube"){
        return 6 ;
    }
    else if(s== "Octahedron"){
        return 8 ;
    }
    else if (s== "Dodecahedron"){
        return 12 ;
    }
    else if(s=="Icosahedron"){
        return 20 ;
    }
}

int main (){
    int i,sum = 0,n ;
    string s ;

    cin>>n ;

    for( i = 0 ; i<n ; i++){
        cin>>s ; 
        sum +=solve(s);
    }
    cout<<sum;
}