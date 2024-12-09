#include<iostream>
using namespace std;
int main(){
    int sum=0,num;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=0;i<=num;i++){
        sum+=i;
    }
    cout<<"Sum : "<<sum;
    return 0;
}