#include <iostream>
#include <cmath>

using namespace std;


//Recursive factorial function
unsigned long factorial( unsigned long number )
28 { 
29 // base case 
30 if ( number <= 1 ) 
31 return 1; 
32 
33 // recursive step 
34 else return number * factorial( number - 1 ); 
36 
37 } 


//recursive fibonacci function
unsigned long fibonacci( unsigned long n ) 
31 { 
32 // base case 
33 if ( n == 0 || n == 1 ) 
34 return n; 
35 
36 // recursive step 
37 else 
38 return fibonacci( n - 1 ) + fibonacci( n - 2 );
39 
40 } 


//computing polynomial of pn(x) function
float Poly(int n, float x){
if (n==0) return 1-x;
else if (n==1) return x*x;

//recursive step
else return 2*x*Poly(n-1,x)/factorial(n);
}


//function to subtract 2 integers 
int subtract(int x, int y)
{
    if(y==0) return x;
    
    //recursive step
    else if (y>0) return -1 + subtract(x, y-1);
    else return 1+  subtract(x, y+1);
}


int CountVowel(char str[] , int len){
    if( str[len-1] == 'a' ||
        str[len-1] == 'e' ||
        str[len-1] == 'i' ||
        str[len-1] == 'o' ||
        str[len-1] == 'u' )
    
    return 1+ CountVowel(str, len-1);
    return 0+CountVowel(str, len-1);
}





