#include<bits/stdc++.h>
using namespace std;

int main(){
   long long int n ,count = 0,dup,x ;

   cin>>n;
   int arr[50] ,i = 0;
//    dup = n ; 

   while ( n >= 10){
    x = n % 10;
    n = n/10 ;
   
    if (x>=5){
        arr[i] = 9-x;
    }
    else{
    arr[i] = x;
    }
    i++;
    count++;

   }
        arr[count] = n;
        if(arr[count] >= 5 && arr[count] < 9){
            arr[count] = 9 - arr[count] ;
        }

   for( i = count ; i>=0 ; i--){

    cout << arr[i];
   }
}
