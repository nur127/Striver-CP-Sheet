#include <bits/stdc++.h>
using namespace std ;

int main (){
    int test ;
    cin>>test ;
    while(test != 0){
        int n ,count = 0,rem,power = 1;
        cin>>n ;
        vector <int> v;

        while(n!=0){

            rem = n%10;
           
            if(rem > 0){
                v.push_back ( rem * power);
                // cout<<arr[i]<<endl ;
               
            }
             n = n/10;
            power *=10 ; 
        }
        cout << v.size() << endl ;
        for(int j = 0 ; j<v.size() ; j++){
            cout << v[j] << " " <<endl ;
        }
    test -- ;
    }
}