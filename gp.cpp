#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number of terms :";
    cin>>n;
    //2 6 18....
    int a=2;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a*3;
    }
}