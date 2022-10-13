#include<iostream>
#include<iomanip>
using namespace std;  
// **************all combinations of 1,2,3**************
int main(){ 
   cout<<"all possible combinations of 1,2,3 are :"<<endl;
   for (int i = 1; i <=3; i++)
   {
      for (int j = 1; j<=3; j++)
      {
         for (int k = 1; k<=3; k++)
         {
            cout<<i<<j<<k<<" ";
         }  
      }
   }
   return 0;
}