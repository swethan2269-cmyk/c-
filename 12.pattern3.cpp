// pattern must be 1 2 3 
//                 4 5 6 
//                 7 8 9 





#include<iostream>
using namespace std;
int main(){int n,m,p=01;
           cout<<"enter the value of n&m";
           cin>>n>>m;
           for(int i=1;i<=n;i++){for(int i=1;i<=m;i++) {cout<<p<<" " ;p++;};
                                  cout<<"\n";};
        return 0;}
