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
    if(a>b){
        if(a>c){
            cout<<a<<"is greatest";
        }
        else{//c>a
            cout<<c<<"is greatest";
        }
    }
    else{// b>a
        if(b>c){
            cout<<b<<"is greatest";
        }
        else{//c>b
            cout<<c<<"is greatest";

        }
    }
}