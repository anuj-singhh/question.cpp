#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter an integer";
    cin>>n;
    // if((n%3==0 || n%5==0) && n%15!=0){
    //     cout<<"number is div by 3 and 5";
    // }
    // else{
    //     cout<<"not taking condition";
        
    // }
    if(n%3==0 || n%5==0){
        if (n%15!=0)
        {
            cout<<"number is div by 3 or 5 and not div by 15";

        }
        else{
            cout<<"not matching condition";

        }
    }
    else{
        cout<<"not matching a condition";
        
    }


}