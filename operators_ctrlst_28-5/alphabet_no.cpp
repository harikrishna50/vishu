#include<iostream>
using namespace std;
char a;
int main(){
    cout << "enter the character:";
    cin >> a;
    if((a>='A' and a<='Z') || (a>='a' and a<='z')){
        cout << "It is an alphabet";
    }
    else{
        cout << "It is not an alphabet";
    }
}