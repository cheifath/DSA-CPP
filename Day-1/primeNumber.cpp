#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=2;i<num-1;i++){
        if(num%i==0){
            cout<<"It is not a prime number";
            break;
        }
    }
    return 0;
}