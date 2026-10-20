//paterrn must be
//1 
//1 2 
//1 2 3 
//1 2 3 4 
//1 2 3 4 5 






#include<iostream>
using namespace std;
int main(){int n,m=1;
           cout<<"enter the values of m";
           cin>>n;
           for(int i=1;i<=n;i++) {
                                   for(int j=1;j<=m;j++)  {cout<<j<<" "; }
                                   cout<<"\n";m++;
                                };
           return 0;}
