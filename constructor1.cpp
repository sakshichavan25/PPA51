#include<iostream>
using namespace std;
class marvellous
{
    public:
    int no1;
    int no2;

marvellous()
{
    cout<<"inside default constructor";
    no1=0;
    no2=0;
}

marvellous(int a, int b)
{
    cout<<"inside parameterised constructor";
    no1=a;
    no2=b;
}

~marvellous()

{
    cout<<"inside destructor";
}

void fun()
{
    cout<<"inside fun";
}
};

int main()
{

marvellous mobj;
mobj.fun();

    return 0;
}
