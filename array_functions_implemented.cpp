#include <iostream>

using namespace std;



//function to print an array
void PrintArr (double a[], int n){
    for(int i=0 ; i<n ; i++){
        cout<< a[i]<<"  ";
    }
    cout<<"\n";
}


//function to reverse an array
void RevArr(double a[], int n)
{
    for(int i=0 ; i<n/2 ; i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1]=temp;
    }
    
    PrintArr(a,n);
}


//function to get max value in array
double getMax(double a[], int n)
{
    double max= a[0];  
    for(int i =1; i< n ; i++){
        if(a[i]>max)
            max= a[i];
                         }
    return max;
}


//function to get min value in array
double getMin(double a[], int n)
{
    double min= a[0];  
    for(int i =1; i< n ; i++){
        if(a[i]< min)
            min= a[i];
                         }
    return min;
}


//function to get average of an array
double getAverage (double x[] , int n)
{
    double sum =0;
    for(int i=0 ; i<n;i++){
        sum+= x[i];
                          }
    double Avg=sum/(double)n;                      
    return Avg;
}


//function used to get index in array of maximum value
double getMaxLoc(double a[], int n)
{
    double max= a[0];  
    double maxLoc= 0;
    for(int i =1; i< n ; i++){
        if(a[i]>max){
            max=a[i];
            maxLoc= i;
        }
                         }
        return maxLoc;
}


//function to get mode of an Array
double getMode (double x[], int n)
{
    double y[100];
    int i,j,maxLoc;
    for (j=0 ; j<n ; j++){
        int c=0;
        for(i=0;i<n;i++){
            if(x[i]==x[j]){
                c++;
                y[j]=c;
        }
    }
}
    maxLoc= getMaxLoc(y,n);
    return x[maxLoc];
}


//function to search for a value in an Array
double search(double val, double x[], int n){
    for(int i=0; i<n; i++){
        if(x[i]==val)
            return i;
    }
    
    return -1;
}




//driver program to test the functions
int main()
{
    int n=0;
    double val=0;
    cout<<"Enter number of values";
    cin>>n;
    double a[n] ={0}; 
   
    cout<<"Enter Array ";
    for(int i=0 ;i<n; i++){
        cin>> a[i];
    }
    
    cout<<"Enter value to search for ";
    cin>>val;
    
   double result= search(val,a,n);
   double max= getMax(a,n);
   double min= getMin(a,n);
   double mode= getMode(a,n);
   double avg= getAverage(a,n);
   double maxlocation = getMaxLoc(a,n);
   
   cout<<"maximum value in array =" <<max <<"\n"<<"minimum value in array =" <<min <<"\n";
   cout<<"mode value of array =" << mode<<"\n"<< "Average  of array =" <<avg<<"\n";
   cout<<"location of maximum value in array =" << maxlocation<<"\n"; //arrays indices starts from 0
   cout<<"the original array is ";
   PrintArr(a,n);
   cout<<"the reversed array is ";
   RevArr(a,n);
   cout<<"the val was found in index "<<result<<"\n"; //-1 for no result
  
    return 0;
}

