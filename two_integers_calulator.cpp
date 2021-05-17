

#include <iostream>

using namespace std;


int add(int x, int y) {
    int result =0;
    result = x+y;
    return result;
}


int subtract (int x, int y) {
    int result =0;
    result = x-y;
    return result;
}


int multiply(int x, int y) {
    int result =0;
    result = x*y;
    return result;
}

int divide(int x, int y) {
    int result =0;
    result = x/y;
    return result;
}

int min(int x, int y){
if(x>y)
    return y;
else return  x;
}

int max(int x, int y){
if(x>y)
    return x;
else return  y;
}


int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}


int getpower(int x , int power){
    int result=x;
    if (power ==2)
    result= x*x;
    
    else{ for(int i = 0 ; i<power-1 ; i++)
    {
        result *= x;
    }
    }
    
    return result;
}


void isPrime(int x){
    bool prime = true;
    
 // 0 and 1 are not prime numbers
    if (x == 0 || x == 1) {
      prime = false;
        
    }
    
    
 // if divisible by any number less than its half then not prime
        for (int i = 2; i <= x / 2; ++i) {
            if (x % i == 0) 
                prime = false;
        }
            if(prime == false)
             cout<<"number is not prime \n";
             else  cout<<"number is prime \n";
 
}

int getsqrt(int x){
int result = -1;    
for(int i = 0 ; i<= x/2; i++){
if(i*i==x)
result = i;
}    
return result;
    
}


int main()
{
    while(1){
        
    
    int s,n;
    int result =0;
    cout<<"Enter values\n";
    cin >> s >> n;
    cout<<"choose operation\n";
    char op = '=';
    cin>> op;
    
switch(op) {
  case '*': 
   {result= multiply(s,n);
   cout<<"result equals=  "<<result << "\n";
    break;}
    
  case '+':
    {result= add(s,n);
   cout<<"result equals= "<<result << "\n";
    break;}
    
  case '-':
    {result= subtract(s,n);
   cout<<"result equals= "<<result << "\n";
    break;}
    
  case '/':
    {result= divide(s,n);
   cout<<"result equals= "<<result << "\n";
    break;}
    
  //for greatest common divisor press g
  case 'g':
    {result= gcd(s,n);
   cout<<"result equals= "<<result << "\n";
    break;}  

  //for comparison of 2 integers press c
  case 'c':
    {result= min(s,n);
    if(result == s)
   cout<<"the smaller number is s which is = "<<result << "\n";
   else cout<<"the smaller number is n which is = "<<result << "\n";
    break;}
    
    //for powers of the numbers
    case 'I':
    {result= getpower(s,2);
   cout<<"result = "<<result << "\n";
   int result2= getpower(n,3);
   cout<<"result = "<<result2 << "\n";
    break;}  

//for determining prime or not press p
    case 'p':
    {
    isPrime(s);
    isPrime(n);
     break;
    }
    
//for determining prime or not press p
    case 's':
    {
    result = getsqrt(s);
    cout<<"result = "<<result << "\n";
    int result2 = getsqrt(n);
    cout<<"result = "<<result2 << "\n";
     break;
    }    

    
// if no implemented operation was selected display nothing entered
 default: cout << "nothing entered \n";
}

}
    return 0;
}
