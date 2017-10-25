#include <iostream>

using namespace std;

int main()
{
    int a=5;
    int *p=&a;
    *p=6;
    int **q=&p;
    int ***r=&q;
    cout<<*p<<","<<*(*(*r));
}
