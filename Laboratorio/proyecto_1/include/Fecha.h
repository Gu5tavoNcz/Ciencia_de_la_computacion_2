#ifndef FECHA_H
#define FECHA_H


class Fecha
{
protected:
    int dia,mes,anio;
public:
    Fecha(int,int,int);
    int getDia(){return dia;}

    int getMes(){return mes;}

    int getAnio(){return anio;}

};

#endif // FECHA_H
