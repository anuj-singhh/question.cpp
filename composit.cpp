#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    bool flag = true;{ 
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
        flag=false;
        break;
    }

    }
    if(n==1)cout<<n<<" nither prime nor composit";
    else if(flag==true)cout<<n<<" prime number";
    else{
        cout<<n<<" composit number";
    }
}

}