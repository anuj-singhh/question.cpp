#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a first number:";
    cin>>a;
    cout<<"enter a second number:";
    cin>>b;
    cout<<"enter a third number :";
    cin>>c;
    if(a>b&&a>c){
        cout<<a<<" :a is largest";

    }
    if(b>a&&b>c){
        cout<<b<<" :b is largest";

    }
    if(c>a&&c>b){
        cout<<c<<": c is largest";


    }

}