#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n,m,left = 0 ,right = 1;
    cin>>n >>m;
    string str[n][m];

    for(int i = 0 ; i<n ; i++){
        int flag = 0 ;
        for ( int j = 0 ; j<m ; j++){
            if(i%2==0){
                str[i][j] = "#";
            }
            else if (i%2 ==1){
                str[i][j] = ".";
                if(j == m-1 && right == 1 && left == 0 && flag ==0){
                    str[i][m-1] = "#";
                    right = 0;
                    left = 1;
                    flag = 1 ;
                }
                else if ( j == 0 && left == 1 && right == 0 && flag == 0 ){
                    str[i][0] = "#";
                    left = 0;
                    right = 1;
                    flag = 1 ;
                }
            }
            cout<<str[i][j];
        }
        cout<<endl ;
    }
}