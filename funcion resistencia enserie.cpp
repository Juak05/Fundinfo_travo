#include <iostream>
using namespace std;

void resistenciaserie()
{
     int numeroderesistencias;
    float resistenciatotal=0;
    cout<<"Introduce el numero de resistencias en serie: "<<endl;
    cin>>numeroderesistencias;
    int resistencias[numeroderesistencias];
    for(int cuenta=0; cuenta<numeroderesistencias; cuenta++)
        {
        cout<<"Introduce la impendancia de la resistencia "<<cuenta+1<<"."<<endl;
        cin>>resistencias[cuenta];
        resistenciatotal+=resistencias[cuenta];
        }
     cout<<"La resistencia total es "<<resistenciatotal<<" ohmios."<<endl;

}



int main ()
{
 while(1)
    resistenciaserie();

    return 0;
}
