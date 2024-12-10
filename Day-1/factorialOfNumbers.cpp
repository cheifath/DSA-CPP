#include<iostream>
using namespace std;
int main(){
    int fact=1,num;
    cout<<"Enter a number:";
    cin>>num;
    if(num==0){
        cout<<"Factorial = 1";
    }
    else{
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    cout<<"Factorial = "<<fact;
    }
    return 0;
}