#include<iostream>
using namespace std;
int main(){
float a,b;
char op;
cout<<"Enter first Number:";
cin>>a;
cout<<"Enter Second Number:";
cin>>b;
cout<<"Enter Operator(+,-,*,/):";
cin>>op;

switch(op){
    case '+':
        cout<<"Your required addition is :"<<a+b;
        break;
    case '-':
        cout<<"Your required subtraction is :"<<a-b;
        break;
    case '*':
        cout<<"Your required Multiplication is :"<<a*b;
        break;
    case '/':
        cout<<"Your required Division is :"<<(a/b);
        break;
    default:
        cout << "Error! Operator is not correct";

}


}