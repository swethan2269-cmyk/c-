//pattern 

//1 
//2 2 
//3 3 3 
//4 4 4 4 
//5 5 5 5 5





#include<iostream>
using namespace std;
int main(){int n,m=1;
           cout<<"enter the values of m";
           cin>>n;
           for(int i=1;i<=n;i++) {
                                   for(int j=1;j<=m;j++)  {cout<<m<<" "; }
                                   cout<<"\n";m++;
                                };
           return 0;}
