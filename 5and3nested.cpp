#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a integer";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"integer is div by 5 and 3 both ";

        }
        else{
            cout<<"integer is div by 5 but not 3";

        }

    }
    else{
        cout<<"not matching condition";

    }
}