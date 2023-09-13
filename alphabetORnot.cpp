#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    int ascii = (int)ch;
    // if(ascii>=97 && ascii<=122){
    //     cout<<"character is lowercase alphabet";

    // }

    // if(ascii>=65 && ascii<=90){
    //     cout<<"character is uppercase alphabet";
        
    // }
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
        cout<<"charecter is an alphabet";
    }
    else{
        cout<<"not an alphabet";

    }
}
