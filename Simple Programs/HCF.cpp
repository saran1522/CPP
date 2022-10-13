#include<iostream>
#include<iomanip>
using namespace std;   
// ***********HCF/GCD of 2 numbers***********
int main(){
    int n1, n2, hcf=1;
    cout<<"enter 2 numbers"<<endl;
    cin>>n1>>n2;
    for (int i = 1; i <=n1; i++)
    {
        if (n1%i==0 && n2%i==0)
        {
           if (i>hcf)
           {
               hcf=i;
           }  
        }   
    }
      cout<<hcf;    
      return 0;
}