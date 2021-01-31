//
//  main.cpp
//  The Trip
//
//  Created by princeraj on 31/01/21.
//
#include<bitstring.h>
#include <iostream>
using namespace std;

int main() {
    
    
  double max=0;
    
    
    int n;
    
    while(cin>>n){
        
        if(n==0){
            break;
        }
    
    
    double arr[n];
    for(auto &x:arr)
        cin>>x;
    
    double sumOfArray=0;
    for(int i=0;i<n;i++)
    sumOfArray+=arr[i];
    
    sumOfArray/=n;
   
    
    
    for(int i=0;i<n;i++)
    {
        if(sumOfArray>arr[i]){
            
            max=max+(sumOfArray-arr[i]);
            
        }
        
      
    }
    printf("$%.3lf\n",max);
        
     
 
    
  
}
    
}
