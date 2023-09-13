#include<iostream>
using namespace std;
int main(){
    // int i,n;
    // cout<<"enter a terms of Ap :";
    // cin>>n;
    // for(i=1;i<=2*n-1;i+=2){
    //     cout<<i<<" ";
    // }
    //4 7 10 13 ....
    int i,a,n;
    cout<<"enter a terms :";
    cin>>n; 
    a=4;
    for(i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+3;
    }
}