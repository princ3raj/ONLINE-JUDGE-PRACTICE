//
//  main.cpp
//  3n+1 Problem
//
//  Created by princeraj on 30/01/21.
//





#include <iostream>
using namespace std;

int main() {
    
    long long n;
    cin>>n;
    long long arr[n];
    long long kepp[n];
    for(auto &x:arr)
        cin>>x;
    
    for(long long i=0;i<n;i++)
    kepp[i]=arr[i];
    
        
        long long flag=0;
        long long max=1;
        long long count=1;
        long long i,j;
        i=0;
        j=1;
        long long number;
        long long k=0;
  
       
      
        number=arr[i];
        
    while(true){
        
        flag=arr[j]-arr[i];
        
        if(flag==0){
            cout<<kepp[k]<<" "<<kepp[j]<<" "<<max<<endl;
            max=0;
            count=1;
            k=k+2;
            number=arr[k];
            i=j+1;
            j=i+1;
            if(j>n){
//                k=i-n;
//                j=i-1;
                 break;
            }
        }
        
   
        
        
           
           
       if(number==1)
            {
               
                if(count>=max){
                    max=count;
                   
                }
                
                arr[i]++;
                number=arr[i];
                count=1;
            }

            if(number%2==0)
            {
                number=number/2;
                count++;
            }
            else
            {
                number=number*3+1;
                count++;
               
            }
        
   
        
        if(j>n){
            cout<<kepp[k]<<" "<<kepp[j]<<" "<<max<<endl;
            break;

        }
        
        
       
        
        
        }
    
 
        
     
      
        

        
        
    }
    



