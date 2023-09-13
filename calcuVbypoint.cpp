#include<iostream>
using namespace std;
int main(){
    // int x=23,y=2;
    // int* p1=&x;
    // int* p2=&y;
    // cout<<*p1 + *p2;
    int x,y;
    cout<<"enter 1st number : ";
    cin>>x;
    cout<<"enter 2nd number : ";
    cin>>y;
    int* p1=&x;
    int* p2=&y;
    cout<<*p1 + *p2;
}