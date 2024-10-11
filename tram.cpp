#include <bits/stdc++.h>
using namespace std ;
int main(){
     int sum = 0,a,b,i ,n,max = 0;
    cin>> n ;

     for(int i = 0 ; i < n ; i++){
          //sum = 0 ;
          cin>>a>>b ;
          sum = (sum - a ) +b ;
          // cout <<"sum :" << sum <<endl;
          if ( max < sum){
               max = sum ;
                 
          }
     }
     cout <<max <<endl;

     return 0 ;
}