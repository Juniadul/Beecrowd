#include <iostream>
using namespace std;
 
int main() {
     
     int n,l,p,i;
     cin>>n;
     int a[n];
     for( i = 0; i < n; i++)
     {
         cin>>a[i];
     }
     l=a[0];
     p=0;
     for(int i =1; i < n; i++)
     {
         if(a[i] < l)
         {
             p=i;
             l=a[i];
             
         }
     }
     cout<<"Menor valor: "<<l<<endl;
     cout<<"Posicao: "<<p<<endl;
     
 
    return 0;
}