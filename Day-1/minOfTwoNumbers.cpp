#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    if(n1<n2){
        cout<<"Smallest:"<<n1;
    }
    else{
        cout<<"Smallest:"<<n2;
    }
    return 0;
}