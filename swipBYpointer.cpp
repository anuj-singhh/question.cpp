#include<iostream>
using namespace std;



void swip(int* x, int*y){
    int temp = *x;
       *x=*y;
       *y=temp;
    
}
int main(){
   int a=21,b=22;
    int* x=&a;
    int* y=&b;
    swip(x,y);
    cout<<a<<" "<<b;
    
}