#include<iostream>
#include<iomanip>
using namespace std;
//**************factorial with recursion***************
int factorial(int a)
{
    if (a<2)
    {
        return 1;
    }
    
    return a*factorial(a-1);
    // suppose 6 is input(a=6)
    //when function called - factorial(6), return 6*factorial(5), now factorial(a) is called again with the value 5
    //factorial(5), return 5*factorial(4), again called with a=4
    //factorial(4), return 4*factorial(3), again called with a=3
    //factorial(3), return 3*factorial(2), again called with a=2
    //factorial(2), return 2*factorial(1), again called with a=1
    //now condintion (a<2) is true, then it will return 1
    //so finally 6*5*4*3*2*1=720 will be returned to main function 
}
int main()
 {
    int a;
    cout<<"enter a number which factorial you want"<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
  }