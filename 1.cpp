#include<bits/stdc++.h>
using namespace std ;

int main(){

int n , h ;
int a ;
cin>>n>>h ;
int count=0 ;
for(int i =0;i<n;i++){
    cin>>a ;
    if(a>h)
        count+=2 ;

    else
        count+=1 ;


}
cout<<count ;


}
