#include <iostream>
#include <math.h>

#define pi 3.141519


using namespace std;

float frecuenciaderesonancia (float l, float c)

{
    return 1/(2*pi*((l*c)*0.5));
}

float conresonancia (float f,float l)
{
    return (pow((1/(2*pi*f)),2)/l);
}

float bnresonancia (float f,float c)
{
    return (pow((1/(2*pi*f)),2)/c);
}

int main ()
{
    float l,c,f;
    char opcion;
    cout<<"Bienvenido al programa de calculos electronicos de tesleros."<<endl;
    cout<<"Que opcion desea elegir."<<endl;
    cout<<"a) Averiguar frecuencia de circuito LC"<<endl;
    cout<<"b) Averiguar valor de condensador del circuito LC"<<endl;
    cout<<"c) Averiguar valor de bobina del circuito LC"<<endl;

    cin>>opcion;

    switch (opcion)
    {
    case 'a':
        cout<<"Introduzca valor de la bobina en henrios: "<<endl;
        cin>>l;
        cout<<"Introduzca valor del condensador en faradios: "<<endl;
        cin>>c;

        cout<<"La frecuencia de resonancia en este circuito LC es: "<<frecuenciaderesonancia(l,c)<<endl;
        break;
    case 'b':
          cout<<"Introduzca valor de la bobina en henrios: "<<endl;
        cin>>l;
        cout<<"Introduzca valor de la frecuencia (hz): "<<endl;
        cin>>f;

        cout<<"El condensador en este circuito LC es: "<<conresonancia (f,l)<<endl;
        break;
          case 'c':
          cout<<"Introduzca valor del condensador en (F): "<<endl;
        cin>>c;
        cout<<"Introduzca valor de la frecuencia (hz): "<<endl;
        cin>>f;

        cout<<"La bobina en este circuito LC es: "<<bnresonancia (f,c)<<endl;
        break;
    }

}
