#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number ";
    cin>>a;
    if(a>0){cout<<"a is positive";}
    if(a==0){cout<<"a is zero";}
    if(a<0){cout<<"a is negative";}
    else{cout<<"it is not a number";}
    return 0;
}