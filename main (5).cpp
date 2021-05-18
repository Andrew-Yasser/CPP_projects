#include <iostream>
#include <cmath>

using namespace std;

float EvalPolynomial(float x, float coeffs[], int n){
    
    float SumPoly=0;
    for(int i=0 ; i<n ; i++){
    SumPoly += coeffs[i]* pow(x,i);   
    }
    
    return SumPoly;
}
   
int main(){

//testing the function
int const n =9;
float a[n]= {2,2.3,-4,6,12,-7,55,6,10};
float x=22;
float fx= EvalPolynomial(x,a,n);
cout<<fx<<endl;

//testing function again
float c[4]= {1,2,3,4};
float x2= -2;

cout<< EvalPolynomial(x2,c,4)<<endl;
    
}