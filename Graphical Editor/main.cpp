//
//  main.cpp
//  Graphical Editor
//
//  Created by princeraj on 31/01/21.
//

#include <iostream>

int main() {
    using namespace std;
    
  
    //commands
    char I, C, L,V,H,K,F,S;
    
    int M;
    int N;
    
    int X;
    int Y;
    
    int X1,Y1,X2,Y2;
    
   
    
    
    cout<<"Initial color I, M , N"<<endl;
    cin>>I>>M>>N;
    
    char arrofpixel[M][N];

    if(I=='I'){
        cout<<"Matrix will form of initially colored 0 of size:"<<M*N<<endl;
       arrofpixel[M][N];
    }
    
    cout<<"Type C ,Clear the table by setting all pixels to white (0)"<<endl;

    cin>>C;
    if(C=='C'){
        cout<<"change all the color to C"<<endl;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                arrofpixel[M][N]='0';
            }
        }
    }
    
    
    for(int i=0;i<M;i++){
        cout<<endl;
        for(int j=0;j<N;j++){
            cout<<arrofpixel[M][N];        }
    }
    
    cout<<endl;
    
    cout<<"Colors the pixel X, Y in C: L, X, Y, C"<<endl;
    cin>>L>>X>>Y>>C;
    if(L=='L'){
        
    
        
    }
    
    
    
    for(int i=0;i<M;i++){
        cout<<endl;
        for(int j=0;j<N;j++){
            cout<<arrofpixel[M][N];        }
    }
    
    cout<<endl;
    
    
    
    cout<<"Draw a vertical segment of color (C) in column X between Y1 and Y2"<<endl;

    cin>>V>>X>>Y1>>Y2>>C;
    if(V=='V'){
        
         cout<<"Draw a vertical segment of color (C) in column X,between    the rows Y 1 and Y 2 inclusive."<<endl;
    }
    
    
    cout<<"Draw a horizontal segment of color (C) in the row Y between X1 and X2"<<endl;

    cin>>H>>X1>>X2>>Y>>C;
    if(H=='H'){
        cout<<"Draw a vertical segment"<<endl;
    }
    
    
    cout<<"draw a filled rectangle of color C: K X1 Y1 X2 Y2 C"<<endl;
    
    cin>>K>>X1>>Y1>>X2>>Y2>>C;
    if(K=='K'){
        cout<<"Draw a rectangle of (x1,y1 and x2, y2)"<<endl;
        
    }
    
    cout<<"fill the region R: F X Y C"<<endl;
    
    cin>>F>>X>>Y>>C;
    if(F=='F'){
       
       cout<<"fill the region R defined (X,Y) with color C"<<endl;
       }
    
    
       
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
}
