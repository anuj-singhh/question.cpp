#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int last_digit = 0;
    int r = 0;
    while(n>0){
       last_digit = n % 10;
        r = r * 10;
        r = r + last_digit;
        n =n / 10;
    }
    cout<<r;

}