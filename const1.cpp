#include<iostream>
using namespace std;

int main()
{
    int no1 = 10;

    const int no2 = 10;

    no1++;  // allow
    no2++;   //not allow

    no1 = 21;  // allow
    no2 = 21;  // not allow

    return 0;
}
