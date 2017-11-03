#include <iostream>

using namespace std;

void llenarM(int (*p)[4])
{
    int (*f)[4]=p;
    int *pc, *c;
    pc=*p;
    c=pc;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            //cout<<"'"<<**f<<"'";
            cout<<*pc<<",";
            pc++;
        }
        f++;
    }
}

int main()
{
   int M[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
   int (*A)[4] = M;
   int (*a)[4] = A;
   int *B, *b;
   int i,j;
   llenarM(M);
/*
   A++;
   B=*A;
   b=B;
   B+=2;

   cout<<*B<<endl;

   i =  A-a;
   j = B - b;

    cout<<i<<","<<j<<endl;

    B = b;
    B += 5;

    cout<<*B<<endl;

    return 0;
    */
}
