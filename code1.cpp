#include <iostream>
using namespace std;
  
int main(){
    int a;
    int b;
    int c;
    cout<<"Enter a number";
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"a is greatest number"<<a;

        }else{
            cout<<"c is greatest number "<<c;
        }
    }
    else{
        if(b>c){
            cout<<"b is greatest number"<<b;
        }
        else{
             cout<<"c is greatest number "<<c;
        }
    }

}