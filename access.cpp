#include<iostream>
using namespace std;
  
  class demo
  {
    public:
    int A;
    private:
    int B;
    public:
    demo()
    {
        A = 11;
        B = 21;
    }
    void fun()
    {
        cout<<"value of A:"<<A<<"\n"; //ALLOWED
        cout<<"value of B:"<<B<<"\n";  //allowed
    }
  };
  int main()
  {
    demo obj;
    obj.fun();
    cout<<"value of A:"<<obj.A<<"\n";
    cout<<"value of B:"<<obj.B<<"\n";
  }