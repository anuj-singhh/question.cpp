#include<iostream>
using namespace std;
int main(){
    int cp;
    int sp;
    cout<<"enter a cost price : ";
    cin>>cp;
    cout<<"enter a selling price :";
    cin>>sp;

    if(sp>cp){
        cout<<"profit="<<sp-cp;
    }

    if(cp>sp){
        cout<<"loss="<<cp-sp;

    }

    if(cp==sp){
        cout<<"no profit no loss ";
    }

}