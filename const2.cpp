#include<iostream>
using namespace std;

class demo
{
    int no1 , no2;
    const int no3;
    const int no4 ;

    demo() : no3(30),no4(40)
    {
       no1 = 10;
       no2 = 20;
    }

    demo(int a, int b, int c ,int d) : no3(c),no4(d)
    {
        no1 = a;
        no2 = b;
    }
};

int main()
{
   demo obj1;

   cout<<obj1.no1<<"\t"<<obj1.no2<<"\t"<<obj1.no3<<"\t"<<obj1.no4;


    return 0;
}