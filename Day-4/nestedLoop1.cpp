#include<iostream>
using namespace std;
int main(){


    int n=5;
    cout<<"Numerical:\n";
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }


    cout<<"\nAlphabets:\n";
    int ch='D';
    for(int i=0;i<n;i++){
        for(char j='A';j<=ch;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    cout<<"\nNumerical Sequence:\n";
    int num=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }

    cout<<"\nAlphabetical Sequence:\n";
    char ch2='A';
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ch2<<" ";
            ch2++;
        }
        cout<<"\n";
    }
    return 0;
}