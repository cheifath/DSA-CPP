#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    
    for(int i=1; i<=n; i++){
        fact*= i;
    }
    return fact;
}


int binomialCoefficient(int factOfN, int factOfR, int factOfNR){
    return factOfN/(factOfR*factOfNR);
}

int main(){
    int n=8, r=3;
    int factOfN=factorial(n);
    int factOfR=factorial(r);
    int factOfNR=factorial(n-r);
    int res=binomialCoefficient(factOfN, factOfR, factOfNR);
    cout<<"binomial Coefficient of "<<n<<","<<r<<" = "<<res<<endl;
    return 0;
}