#include<iostream>
#include<iomanip>
using namespace std;   
// ****************prime numbers under a given number*****************
int main(){
   int n, k, j;
   cout<<"enter n"<<endl;
   cin>>n;
   for(int i=1; i<=n; i++){
      if (i==1||i==2)
      {
         cout<<i<<" ";
      }
      else{
         for (j = 2; j<= i-1; j++)
         {
            if (i%j==0)
              break;   
         }
         if(i==j) //if the loop executed completly then i is not divisible by any no. so it is prime
          cout<<i<<" ";
      }
   }
  return 0;
}