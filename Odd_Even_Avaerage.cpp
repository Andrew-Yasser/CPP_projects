#include <iostream>

using namespace std;


int main(){

const int n = 5; 
int a[n];


//user enters array elements
cout<<"please enter "<<n<<"elements"<<endl;

for(int i=0 ; i<n; i++){
    
    cin>>a[i];
}


//calculation of even and odd sum and count

int EvenSum = 0, OddSum=0;
int CountEven=0, CountOdd=0;

for(int j=0 ; j<n ; j++){
    
   if(a[j]%2==0) {
    EvenSum += a[j];
    CountEven ++;}
   else{
    OddSum += a[j];
    CountOdd ++;
   }
    
cout<<"avergae sum of even = "<<(float) EvenSum/CountEven<<endl <<"avergae sum of odd = "<<(float) OddSum/CountOdd<<endl;
    
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
