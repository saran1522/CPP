#include<bits/stdc++.h>
using namespace std;
//if choice is 1, sum of all numbers<=n
//if choice is 2, multiplication of all numbers<=n
int main()
{
  int n, choice, sum=0, pro=1;
  cout<<"enter the number"<<endl;
  cin>>n;
  cout<<"enter the choice:\n1 for addition\n2 for multiplication"<<endl;
  cin>>choice;
   if(choice!=1||choice!=2)
     cout<<"wrong choise"<<endl;
   for (int i = 1; i <= n; i++)
   {
      if (choice==1)
      {
          sum=sum+i;
      }
      if (choice==2)
      {
          pro=pro*i;
      }
      
   }
   if (choice==1)
   {
      cout<<sum;
   }
   if (choice==2)
   {
      cout<<pro;
   }
 return 0; 
}