#include<iostream>
using namespace std;

int checkPrime(int n) {
    bool isPrime=true;
    if(n==0 || n==1){
        isPrime=false;
    }else {
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                isPrime=false;
            }
        }
    }
    return isPrime;
}
int main(){
    int num=4;
    bool isPrime=checkPrime(num);
    if(isPrime==true){
        cout<<num<<" is a prime number"<<endl;
    }else{
        cout<<num<<" is not a prime number"<<endl;
    }
    return 0;
}