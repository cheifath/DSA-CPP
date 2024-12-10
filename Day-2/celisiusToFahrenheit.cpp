#include<iostream>
using namespace std;
int main(){
    float celisius=0;
    cout<<"Enter the celisius:";
    cin>>celisius;
    float fahrenheit=(celisius*9/5)+32;
    cout<<"Fahrenheit of "<<celisius<<" is "<<fahrenheit;
    return 0;
}