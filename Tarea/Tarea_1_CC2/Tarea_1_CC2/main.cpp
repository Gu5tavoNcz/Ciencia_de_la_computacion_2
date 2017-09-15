
#include <iostream>
using namespace std;

///////////////////////////////////////////////////

void bisiesto(int n,int m[])
{
    if((n%4==0 && n%100!=0) || n%400==0)
        m[1]=29;
    else
        m[1]=28;
}

void corregir_signo(int &b,int &c)
{
    if(b<0)
        b=b*(-1);
    if(c<0)
        c=c*(-1);
}

int dias_t(int d, int m,int a,int list[])
{
    int dias=0;
    for(int i=1;i<a;i++)
    {
        bisiesto(i,list);
        for(int j=0;j<12;j++)
            dias=dias+list[j];
    }
    bisiesto(a,list);
    for (int k=0;k<m;k++)
        dias=dias+list[k];
    dias+=d;
    return dias;
}


///////////////////////////////////////////////////

int suma_mod(int a,int b,int mod)
{
    int temp=a+b;
    temp=temp%mod;
    while(temp<0)
        temp+=mod;
    return temp;
        
}


int resta_mod(int a,int b,int mod)
{
    int temp;
    if(a>=b)
        temp=a-b;
    else
        temp=b-a;
    while(temp>mod)
        temp-=mod;
    while(temp<0)
        temp+=mod;
    return temp;
}

int multiplicacion_mod(int a,int b,int mod)
{
    int temp=a*b;
    temp=temp%mod;
    while(temp<0)
        temp+=mod;
    return temp;
}

int euclides(int a,int b)
{
    int c;
    while (a!=b)
    {
        if (a>b)
            a=a-b;
        else
            b=b-a;
    }
    c=a;
    return c;
}

int invertir(int a,int mod,int x=0,int y=1)
{
    int p,q,r;
    static int m=a;
    if(mod==1)
    {
        while(y<0)
            y+=m;
        return y;
    }
    
    else
    {
        q=a/mod;
        r=a-q*mod;
        p=x-q*y;
        x=y;
        y=p;
        return invertir(mod,r,x,y);
    }
}


int inversa_mod(int a,int mod)
{
    if(euclides(mod, a)!=1)
    {
        cout<<"No tiene inverso ";
        return 0;
    }
    else
        return invertir(mod, a);
}

///////////////////////////////////////////////////

void ejercicio_1()
{
    int d1,m1,a1,d2,m2,a2,horas,minutos,semanas,dias=2;
    int meses[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    long int segundos;
    cout<<"Introduce una fecha: ";
    cin>>d1>>m1>>a1;
    cout<<"Introduce otra fecha: ";
    cin>>d2>>m2>>a2;
    corregir_signo(m1,a1);
    corregir_signo(m2,a2);
    dias+=dias_t(d2,m2,a2,meses)-dias_t(d1,m1,a1,meses);
    horas=dias*24;
    minutos=horas*60;
    segundos=minutos*60;
    semanas=dias/7;
    cout<<"\t\t\t\tREDONDEANDO:\tREDONDEANDO UP\tREDONDENADO DOW"<<endl;
    cout<<"Num Dias:\t\t"<<dias<<"\t\t\t"<<dias<<"\t\t"<<dias<<"\t\t"<<dias<<endl;
    cout<<"Num Semanas:\t"<<float(semanas)<<endl;
    cout<<"Num Meses:\t\t"<<float(dias/30.5)<<"\t\t\t"<<int(dias/30)<<endl;
    cout<<"Num Anios:\t\t"<<a2-a1<<"\t\t"<<int(a2-a1)<<endl;
    cout<<"Num Segundos:\t"<<segundos<<endl;
    cout<<"Num Minutos:\t"<<minutos<<endl;
    cout<<"Num Horas:\t\t"<<horas<<endl;
}

///////////////////////////////////////////////////

void ejercicio_2()
{
    int n, divisores, numero, nuevo_numero;
    nuevo_numero = 0;
    numero = 1;
    cout<<"Ingrese un numero: ";
    cin>>n;
    while (nuevo_numero<n)
    {
        divisores=0;
        for(int i=2;i<numero;i++)
            if ((numero%i)==0)
                divisores++;
        nuevo_numero=numero;
        if (divisores==0)
            cout<<numero<<" ";
        numero++;
    }
}

///////////////////////////////////////////////////
void ejercicio_3()
{
    int operacion,mod,a,b;
    cout<<"Ingrese un numero mnodulo: ";
    cin>>mod;
    cout<<"Ingrese un numero A: ";
    cin>>a;
    cout<<"Ingrese un numero B: ";
    cin>>b;
    cout<<"\n1.- Suma\n2.- Resta\n3.- Multiplicacion\n4.- Inverso\n\nIntroduzca un numero para su operacion: ";
    cin>>operacion;
    switch(operacion)
    {
        case 1:
            cout<<"\nLa suma es: "<<suma_mod(a,b,mod)<<"\n"<<endl;
            break;
        case 2:
            cout<<"\nLa resta es: "<<resta_mod(a,b,mod)<<"\n"<<endl;
            break;
        case 3:
            cout<<"\nLa multilicacion es: "<<multiplicacion_mod(a,b,mod)<<"\n"<<endl;
            break;
        case 4:
            cout<<"\nLa inversa es: "<<inversa_mod(a,mod)<<"\n"<<endl;

    }
    
}

///////////////////////////////////////////////////

void ejercicio_4()
{
    
    cout<<"En construccion 4 ..."<<endl;
}


int main()
{
    int ejercicio;
    cout<<"1.- Diferencia de fechas.\n2.- Numeros primos menosres a mil.\n3.- Calculadora modular. \n4.- Encriptar - Desencriptar.\n\nIngrese el numero del ejercicio a ejecutar: ";
    cin>>ejercicio;
    switch(ejercicio)
    {
        case 1:
            ejercicio_1();
            break;
        case 2:
            ejercicio_2();
            break;
        case 3:
            ejercicio_3();
            break;
        case 4:
            ejercicio_4();
            break;
        default:
            cout<<"Ejercicio incorrecto\n"<<endl;
    }
}
