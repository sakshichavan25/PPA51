#include<iostream>
using namespace std;

class demo
{
    public:
    int addition(int a, int b)
    {
        return a+b;
    }
    double addition(double a, double b)
    {
          return a+b;
    }
    int addition(int a, int b, int c)
    {
        return a+b+c;
    }

};
 int main()
 {
   
  demo obj;
    cout<<obj.addition(10,11);
    cout<<obj.addition(11,99);
    cout<<obj.addition(10,11,20);



    return 0;
 }