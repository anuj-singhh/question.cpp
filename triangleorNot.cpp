#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a first side:";
    cin>>a;
    cout<<"enter a second side:";
    cin>>b;
    cout<<"enter a third side:";
    cin>>c;
    if((a+b>c) && (b+c>a) && (a+c>b)){
        cout<<" thay are triangle";
    }
    else{
        cout<<"not a triangle";
    }
}