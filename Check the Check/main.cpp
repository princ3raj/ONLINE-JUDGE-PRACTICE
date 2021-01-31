//
//  main.cpp
//  Check the Check
//
//  Created by princeraj on 31/01/21.
//

/**
 . . . . . . . .
 p p . p p p p p
 . . . . . . . .
 B R . . . B . .
 . . . . . . . .
 P P P . P P P P
 K . . . . . . .
 . k . . . . . .
 */

#include <iostream>

using namespace std;

int main() {
    
    int flag=0;
    char chess[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>chess[i][j];
        }
    }
    //Outer For loop
    for(int i=0;i<8;i++){
        
        if(flag==1){
            break;
        }
        
        cout<<endl;
        
        for(int j=0;j<8;j++){
            
            if(flag==1){
                break;
            }
            
            
            //WHEN IT'S TURN FOR WHITE PLAYER BY USING BISHOP
            if(chess[i][j]=='B'){
                
                
                int k=i;
                int l=j;
                
                while(k<=7&&l<=7){
                    
                    if(chess[k][l]=='p'||chess[k][l]=='P'||chess[k][l]=='K'||chess[k][l]=='R'){
                       
                        k=i;
                        l=j;
                        break;
                    }
                   
                    if(chess[k][l]=='k'){
                        
                        flag=1;
                        cout<<"black king is in check at:"<<k<<l<<endl;
                    
                        k=i;
                        l=j;
                        break;
                    }
                    
                    k++;
                    l++;
                    
                    if(k==8){
                        k=i;
                        l=j;
                        break;
                    }
                    
                    if(l==8){
                        k=i;
                        l=j;
                        break;
                    }
                    
                }
                
                while(k>=0&&l>=0){
                
                    if(chess[k][l]=='p'||chess[k][l]=='P'||chess[k][l]=='K'||chess[k][l]=='R'){
                     
                        k=i;
                        l=j;
                        break;
                    }
                    
                    
                    if(chess[k][l]=='k'){
                        flag=1;
                        cout<<"black king is in check at:"<<k<<l<<endl;
                  
                        k=i;
                        l=j;
                        break;
                    }
                    k--;
                    l--;
                    
                    if(k==-1){
                        k=i;
                        l=j;
                        break;
                    }
                    
                    if(l==-1){
                        k=i;
                        l=j;
                        break;
                    }
                    
                }
                
                while(k<=7&&l>=0){
                    
                    if(chess[k][l]=='p'||chess[k][l]=='P'||chess[k][l]=='K'||chess[k][l]=='R'){
                        
                        k=i;
                        l=j;
                       
                        break;
                    }
                   
                    if(chess[k][l]=='k'){
                        flag=1;
                        cout<<"black king is in check at:"<<k<<l<<endl;
                     
                        k=i;
                        l=j;
                        break;
                    }
                    
                    
                    
                    k++;
                    l--;
                    
                    if(l==-1){
                        k=i;
                        l=j;
                        break;
                       
                    }
                    if(k==8){
                        k=i;
                        l=j;
                        break;
                        
                    }
                    
                    
                    
                }
                
                while(k>=0&&l<=7){
                    
          
                    
                    if(chess[k][l]=='p'||chess[k][l]=='P'||chess[k][l]=='K'||chess[k][l]=='R'){
                 
                        break;
                    }
                   
                    if(chess[k][l]=='k'){
                        flag=1;
                        cout<<"black king is in check at:"<<k<<l<<endl;
                     
                        k=i;
                        l=j;
                        break;
                    }
                    
                    k--;
                    l++;
                    
                }
                
                
                
            } //End if Block for BISHOP(WHITE)
            
           
            
            
            //WHEN IT'S TURN FOR WHITE PLAYER BY USING
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
        }//inner For Loop
        
       
        
        
       
    }//Outer For Loop
    cout<<endl;
}// Main Function
