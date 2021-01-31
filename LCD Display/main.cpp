//
//  main.cpp
//  LCD Display
//
//  Created by princeraj on 31/01/21.
//

#include <iostream>
using  namespace::std;

int main() {
    
    
    int s;
    cin>>s;
    int m=(2*s)+3;
    int n=4*(s+2);
    char matrix[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            
            
            if(((j==0||j==1||j==4)||(j>=7&&j<=11))&&(i==0||i==3||i==6)){
                
                matrix[i][j]='*';
                
            }else if(i==0||i==3||i==6){
                
                matrix[i][j]='-';
                
            }
            
            if((j==0||j==3||j==6||j==8||j==10||j==12)&&(i==1||i==2||i==4||i==5) ){
                
                matrix[i][j]='|';
                
                
                
                
            }else if(((j==0||j==1||j==4)||(j>=7&&j<=11))&&(i==0||i==3||i==6)){
                
                
                matrix[i][j]='*';
            }
            
           
        }
    }
    
    
    for(int i=0;i<m;i++)
    {
        cout<<endl;
        for(int j=0;j<n;j++){
            
           
            
            cout<<matrix[i][j];
        }
    }
    
    cout<<endl;
    
    
    
  
    
    

    
    
    
    



  
  
   
}
