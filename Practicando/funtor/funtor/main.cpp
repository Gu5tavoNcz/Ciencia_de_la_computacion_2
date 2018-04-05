//
//  main.cpp
//  funtor
//
//  Created by Gustavo Ñaupa Canaza on 4/12/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#include <iostream>
using namespace std;

class suma
{
private:
    int x;
public:
    suma(int x): x(x) {}
    int operator()(int y) { return x+y;}
};

class mult
{
private:
    int x;
public:
    mult(int x): x(x) {}
    int operator()(int y) { return x*y;}
};

template<typename T>
void tabla(T fn)
{
    for(int x=0;x<11;x++)
        cout<<fn(x)<<endl;
}


int main()
{
    suma suma_2(2);
    
    cout << "Hello world! "<< suma_2(5) << endl;
    tabla(suma(5));
    cout<<"-------------------------------"<<endl;
    tabla(mult(10));
    return 0;
}
