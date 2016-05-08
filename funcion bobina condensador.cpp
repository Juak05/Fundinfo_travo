#include <iostream>
#include <math.h>
using namespace std;



float condensadorparalelo ()
{

    int numerodecondensadores;
    float condensadortotalparalelo=0;
    cout<<"Introduce el numero de condesadores en paralelo: "<<endl;
    cin>>numerodecondensadores;
    float condensadores[numerodecondensadores];
    for(int cuenta=0; cuenta<numerodecondensadores; cuenta++)
    {
        cout<<"Introduce la capacidad del condensador(En faradios) "<<cuenta+1<<"."<<endl;
        cin>>condensadores[cuenta];
        condensadortotalparalelo+=condensadores[cuenta];
    }
    return condensadortotalparalelo;
}

float condensadorserie ()
{

    int numerodecondensadores;
    float condensadortotalserie=0;
    cout<<"Introduce el numero de condesadores en serie: "<<endl;
    cin>>numerodecondensadores;
    float condensadores[numerodecondensadores];
    for(int cuenta=0; cuenta<numerodecondensadores; cuenta++)
    {
        cout<<"Introduce la capacidad del condensador(En faradios) "<<cuenta+1<<"."<<endl;
        cin>>condensadores[cuenta];
        condensadortotalserie+=1/condensadores[cuenta];
    }
    return condensadortotalserie;
}


float bobinaparalelo ()
{

    int numerodebobinas;
    float bobinatotalparalelo=0;
    cout<<"Introduce el numero de bobinas en paralelo: "<<endl;
    cin>>numerodebobinas;
    float bobinas[numerodebobinas];
    for(int cuenta=0; cuenta<numerodebobinas; cuenta++)

    {
        bobinatotalparalelo=1/bobinatotalparalelo;
        cout<<"Introduce la inductancia de las bobinas(En henrios) "<<cuenta+1<<"."<<endl;
        cin>>bobinas[cuenta];
        bobinatotalparalelo+=1/bobinas[cuenta];
    }
    return bobinatotalparalelo;
}

float bobinaserie ()
{

    int numerodebobinas;
    float bobinatotalserie=0;
    cout<<"Introduce el numero de bobinas en serie: "<<endl;
    cin>>numerodebobinas;
    float bobinas[numerodebobinas];
    for(int cuenta=0; cuenta<numerodebobinas; cuenta++)
    {
        cout<<"Introduce la inductancia de las bobinas (En henrios) "<<cuenta+1<<"."<<endl;
        cin>>bobinas[cuenta];
        bobinatotalserie+=bobinas[cuenta];
    }
    return bobinatotalserie;
}





int main()
{
    char opcion,con,bon;
    cout<<"Bienvenido al programa de calculos electronicos de tesleros."<<endl;
    cout<<"Que opcion desea elegir."<<endl;
    cout<<"Condesadores(c)"<<endl;
    cout<<"Bobinas(b)"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 'c':
        cout<<"Eliga tipo de conexion serie(s) o paralelo(p)"<<endl;
        cin>>con;

        switch (con)
        {
        case 's':
            cout<<"- El resultado en SERIE es: "<< condensadorserie() <<endl;
            break;

        case 'p':
            cout<<"- El resultado en PARALELO es: "<< condensadorparalelo() <<endl;
            break;
        }
    case 'b':
        cout<<"Eliga tipo de conexion serie(s) o paralelo(p)"<<endl;
        cin>>bon;

        switch (bon)
        {
        case 's':
            cout<<"- El resultado en SERIE es: "<< bobinaserie() <<endl;
            break;

        case 'p':
            cout<<"- El resultado en PARALELO es: "<< bobinaparalelo() <<endl;
            break;
        }
    }
}






