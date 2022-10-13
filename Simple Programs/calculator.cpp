#include<bits/stdc++.h>
using namespace std;
// ****************working calculator***************
int main()
{
  cout<<"operators are:"<<endl;
  cout<<"+ for addition"<<endl;
  cout<<"- for substraction"<<endl;
  cout<<"* for multiplication"<<endl;
  cout<<"/ for divison"<<endl;
    float n1, n2;
    char op;
  while(true){
   cout<<"enter numbers and operation to perform(ex. 4/2)\nenter x in place of operator to exit"<<endl;
   cin>>n1>>op>>n2;
  if (op=='x')
     break;
  else if (op=='+'||op=='-'||op=='*'||op=='/')
  {
    if(op=='+')
    cout<<n1+n2;
    if(op=='-')
    cout<<n1-n2;
    if(op=='*')
    cout<<n1*n2;
    if(op=='/')
    cout<<n1/n2;
  }
  else
  cout<<"invalid operation"<<endl;
 }
 return 0;
}