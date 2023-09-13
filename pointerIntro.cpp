#include<iostream>
using namespace std;
int main(){
    int x=12211;
    int*p=&x;
    cout<<x<<endl;
    *p=300;
    cout<<x;
    
}