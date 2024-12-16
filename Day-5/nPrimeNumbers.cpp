#include<iostream>
using namespace std;

void primeNum(int n){
    int num=1;
    bool isPrime=true;
    if(n==0 || n==1){
        cout<<"There is no prime number between the range of "<<n<<endl;
    } else{
        for(int i=1; i<=n; i++){
            isPrime=true;
            for(int j=2; j*j<=num; j++){
                if(num%j==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime==true && num!=1){
                cout<<num<<" ";
            }
            num++;
        }
    }
}

int main(){
    int num=20;
    primeNum(num);
    return 0;
}