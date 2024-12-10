#include<iostream>
using namespace std;
int main(){
    float principle,rate,time;
    cout<<"Enter the priciple amount:";
    cin>>principle;
    cout<<"Enter the rate of interest:";
    cin>>rate;
    cout<<"Enter the time of period:";
    cin>>time;
    double i=(principle*rate*time)/100;
    cout<<"Simple Interest:"<<i;
    return 0;
}