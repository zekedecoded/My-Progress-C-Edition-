#include <iostream>
#include <cstdlib>

using namespace std;

int product(int a,int b)
{
    int pro = a * b;
    
    return pro;
}
int divide(int a,int b)
{
    int div = a / b;
    
    return div;
}
int add(int a,int b)
{
    int sum = a + b;
    
    return sum;
}
int sub(int a,int b)
{
    int dif = a + b;
    
    return dif;
} 
int main()
{
    int ans,ope,num1,num2;
    
    cout<<"Select Math Operation...\n";
    cout<<"1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
    cin>>ope;
    cout<<"First Number:\t ";
    cin>>num1;
    cout<<"Second Number:\t ";
    cin>>num2;
    switch(ope)
    {
      case 1:
      ans = add(num1,num2);
      break;
      
      case 2:
      ans = sub(num1,num2);
      break;
      case 3:
      ans = product(num1,num2);
      break;
      case 4:
      ans = divide(num1,num2);
      break;
    }
    
    cout<<"The Answer is:\t"<<ans;
    
    
    
    return 0;
    
}
