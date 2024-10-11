#include<bits/stdc++.h>
using namespace std ;

int main (){
    int x[3],temp;

    for(int i = 0 ; i<3 ; i++){
      cin>>x[i];
    }

  for( int i = 0 ; i<3 ; i++){

    for(int j = i+1 ; j<3 ; j++){

      if(x[i]>x[j]){
        swap(x[i] , x[j]);
      }

    }
  }

    cout <<x[2] - x[0];
  

}