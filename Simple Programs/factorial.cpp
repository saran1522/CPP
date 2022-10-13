#include<iostream>
#include<iomanip>
using namespace std;
 // ***************factorial without recursion***************
int main()
{
    
   int i, facto=1, n;
    cout<<"enter the number which's factorial you want"<<endl;
    cin>>i;
    n=i;
    if(i==0||i==1){
        facto=1;
       }
    else{
    while (i>0)
    {
       facto=facto*i;
       i--;
    }
    }
    cout<<"the factorial of "<<n<<" is "<<facto<<endl;
    return 0;
}