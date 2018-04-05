#include <iostream>
using namespace std;


class operacion
{
private:
    int _x;
public:
    operacion(int x):_x(x) {};
    int operator()(int a)
    { return _x+a;}
};

template<typename T>
void operador(T a, int *b)
{
    *(b-1) = *b;
    *b = a(*b);
}


int main(int argc, char* argv[])
{
    int *a = new int[2];
    *a = 0;
    *(a+1) = 1;
    
    for(int i= 0; i<=10; i++)
    {
        cout<<*a<<endl;
        operador(operacion(*a),a+1);
    }
    
    system("PAUSE");
    return 0;
}
