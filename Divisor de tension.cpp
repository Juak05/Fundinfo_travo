#include <iostream>
#include <math.h>

#define pi 3.141519


using namespace std;

float divisorcap (float c1, float c2, float vin)

{
    return (c1/(c1+c2))*vin;
}
float divisorres (float r1, float r2, float vin)
{
    return (r2/(r1+r2))*vin;
}


int main ()
{
    float c1,c2,r1,r2,vin;

    char opcion;
    cout<<"Bienvenido al programa de calculos electronicos de tesleros."<<endl;
    cout<<"Que opcion desea elegir."<<endl;
    cout<<"a) Divisor capacitivo."<<endl;
    cout<<"b) Divisor resistivo."<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 'a':
        cout<<"Introduzca los dos valores de los condesadores C1 y C2 en Faradios."<<endl;
        cout<<"Introduce C1: ";
        cin>>c1;
        cout<<"Introduce C2: ";
        cin>>c2;
        cout<<"Ahora introduzca la tension del circuito."<<endl;
        cin>>vin;
        cout<<"El valor del divisor capacitivo es:"<<divisorcap(c1,c2,vin)<<endl;

        break;
    case 'b':
        cout<<"Introduzca los dos valores de las resistencias R1 y R2 en Ohmios."<<endl;
        cout<<"Introduce R1: ";
        cin>>r1;
        cout<<"Introduce R2: ";
        cin>>r2;
        cout<<"Ahora introduzca la tension del circuito."<<endl;
        cin>>vin;
        cout<<"El valor del divisor resistivo es:"<<divisorres(r1,r2,vin)<<endl;

        break;

    }

}
