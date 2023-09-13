#include<iostream>
using namespace std;
  
    // cout<<sizeof(int)<<"size is";
    // cout<<endl;
    // cout<<sizeof(float)<<"size is";
    // cout<<endl;
    // cout<<sizeof(bool)<<"size is";
    // cout<<endl;
    // cout<<sizeof(char)<<"size is";
    // cout<<endl;
    // cout<<sizeof(long long)<<"size is";
    // cout<<endl;
    // cout<<sizeof(double)<<"size is";
    // cout<<endl;
    //cout<<2+33;
void swap(int* x, int* y){
    int temp = *x;
       *x = *y;
       *y = temp;
    
}
int main(){
   int a=21,b=22;
    int* x=&a;
    int* y=&b;
    swap(x,y);
    cout<<a<<" "<<b;
    
}
