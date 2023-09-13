#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int last_number=0;
    int sum=0;
    while(n>0){
        last_number=n%10;
        sum=sum+last_number;
        n=n/10;
    }
    cout<<sum;

}