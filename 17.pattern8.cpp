//pattern must be
//1
//2 3
//4 5 6


#include<iostream>
using namespace std;
int main(){ int n,m=1;
            cout<<"enter the value of n"<<"\n";
            cin>>n;
            for ( int i=1;i<=n;i++) { 
             for(int j=1;j<=i;j++){cout<<m<<" ";m++;}
              cout<<"\n";}
           return 0;}
