#include <iostream>
using namespace std;

int main ()

{
    char opcion;
    cout<<"Bienvenido al programa de calculos electronicos de tesleros."<<endl;
    cout<<"Que opcion desea elegir."<<endl;
    cout<<"Resistencias(R)."<<endl;
    cout<<"Condesadores(C)"<<endl;
    cout<<"Bobinas (L)"<<endl;
    cout<<"Semiconductores (S)"<<endl;
    cout<<"Filtros (F)"<<endl;

    switch(opcion)
    {
    case'r':
    case'R':
        cout<<"Resistencias"<<endl;
        break;
    case 'c':
    case 'C':
        cout<<"Condensadores"<<endl;
        break;
    case 'l':
    case 'L':
        cout<<"Bobinas"<<endl;
        break;
    case 's':
    case 'S':
        cout<<"Semiconductores"<<endl;
        break;
    case 'f':
    case 'F':
        cout<<"Filtros"<<endl;
        break;
    }

}

