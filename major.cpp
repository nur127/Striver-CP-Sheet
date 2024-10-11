#include <bits/stdc++.h>
using namespace std ;

int main (){
    int n ,max,min,maxIndex,minIndex,s,ans,i,j;
    cin>>n ;
    int arr[n];
    

    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    min = arr[0];
    max = arr[0];

    for ( i = 0 ; i < n ; i++){
        if ( arr[i] > max){
            max = arr[i];
        }
        if ( arr[i] < min){
            min = arr[i] ;
        }
    }

    for ( i = 0 ; i<n ; i++){
        if ( arr[i] == max ){
            maxIndex = i ;
            break;
        }
    }

     for ( i = n-1 ; i >= 0 ; i--){
        if ( arr[i] == min ){
            minIndex = i ;
            break;
        }
    }

    //cout<<"Max index :" << maxIndex <<" " << " Min index : " << minIndex << endl ;

if ( maxIndex > minIndex ){
    ans = ((maxIndex - 0) + ( (n-1) - minIndex )) - 1 ;
    cout << ans ;
    return 0 ;
}

else{
    ans = (maxIndex - 0) + ( (n-1)-minIndex ) ;
    cout << ans ;
}
    
    return 0 ;
}