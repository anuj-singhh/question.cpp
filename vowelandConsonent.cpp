#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
            cout<<"character is a vowel";
        }
        else{
            cout<<" character is consonont";
        }
    }
    else{
        cout<<"not an alphabet";

    }
}