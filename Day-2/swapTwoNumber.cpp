//Swapping two number without third variable using arithemetic operator
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Before Swapping\na="<<a<<"\tb="<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter Swapping\na="<<a<<"\tb="<<b;
    return 0;
}