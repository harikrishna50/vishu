#include<iostream>
using namespace std;
int a,b,c;

int main(){
    cout<<"enter the value of a:";
    cin>> a;
    cout << "enter the value of b:";
    cin >> b;
    cout << "enter the value of c:";
    cin >> c;

    if(a>b and a>c){
        cout<< "a is the greatest";
    }
    else if (b>c and b>a){
        cout << "b is the greatest";
    }
    else{
        cout << " c is the greatet";
    }
}