#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter an number ";
    cin>>n;
    if(n<0){
        n = -n;
    }
    cout<<n;
}