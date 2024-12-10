#include<iostream>
using namespace std;
int main(){
    int age,count=0;
    cout<<"Enter you age:";
    cin>>age;
    if(age>=18){
        cout<<"Congatulation you're eligible for driving license";
    }
    else if(age<18){
        while(age!=18){
            age+=1;
            count++;
        }
        cout<<"Sorry you're not eligible. Apply after "<<count<<" years";
    }
    return 0;
}