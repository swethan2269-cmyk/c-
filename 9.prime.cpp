#include<iostream>
using namespace std;
int main(){int n,pri;
           cout<<"enter the number";
           cin>>n;
           for(int i=2;i<=n-1;i++) {if(n%i==0){n=pri;}};
        
           if(n==pri){cout<<"not prime"<<"\n";}
           else{cout<<"prime"<<"\n";};
           return 0;
           }
