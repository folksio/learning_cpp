#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<"small latter"<<endl;
    }
    else    if(ch>='A' && ch<='Z')
    {
        cout<<"capital latter"<<endl;
    }
    else
    {
        cout<<"number and character"<<endl;
    }
    return 0;
}
