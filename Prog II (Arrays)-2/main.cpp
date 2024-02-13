//  main.cpp
//  Prog II (Arrays)-2
//  Created by Christos Kyriakou on 13/02/2024.

#include <iostream>

using namespace std;

const int MAX=100;

int main(){
    
    int A[MAX];
    int n;
    
    do{
        cout<<"Enter a number that is in the ranger of [1-100]: ";
        cin>>n;
        
    }while(n<0||n>100);
    
    cout<<"Enter: "<<n<<"numbers: "<<endl;
        
    for(int i=0;i<MAX;i++){
        
        cin>>A[i];
      //  cout<< i <<" : "<<A[i]<< endl;
    }
    
    int i=0;
    bool sorted=true;
    while(sorted && i<n-1)
    
    {
        sorted=A[i]<=A[i+1];
        i++;
        
    }
    
    if(sorted)
        cout<<"Array is sorted: "<<endl;
    else
        cout<<"Array is NOT sorted"<<endl;
}

 
    

