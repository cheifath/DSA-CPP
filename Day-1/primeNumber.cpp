#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int num,i=0;
    cout<<"Enter the number:";
    cin>>num;

    if(num==1){
        cout<<"It is not a prime number";
    }

    for(i=2;i<num;i++){
        if(num%i==0){
            cout<<"It is not a prime number";
            exit(0);
        }
    }
        cout<<"It is a prime number";

    return 0;
}