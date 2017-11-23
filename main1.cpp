#include <iostream>
#include "polinom.h"
#include "e_s_polinom.h"
#include "arit_polinom.h"
using namespace std;
ostream& operator<< (ostream& os, const polinomio& p);
int main()
{
    char op;

    polinomio pol = load_polinom();
    polinomio pol1 = load_polinom();


    while(!cin.eof())
    {
        cout << "\n----------------------------- \n"
                "Seleccione una opcion: \n\n"
                "\t1. Suma \n"
                "\t2. Resta \n"
                "\t3. Producto \n"
                "\t4. Derivada \n" << endl;
        cout <<"Ctrl + D para salir"<<endl;
        cin >> op;
        switch(op)
        {
            case 49:
                cout <<"Suma = "<< pol+pol1 <<endl ;
                break;
            case 50:
                cout <<"Resta = "<< pol-pol1 <<endl ;
                break;
            case 51:
                cout <<"Producto = "<< pol*pol1 <<endl ;
                break;
            case 52:{
                char j=48;
                while((j!=49)&&(j!=50))
                {
                    cout<<"Elija a que polinomio desea realizarle la derivada, introduzca 1 o 2"<<endl;
                    cin>>j;
                    switch(j)
                            {
                            case 49:cout <<"Primer polinomio ="<<pol <<endl;
                                     cout <<"Derivada del primer polinomio ="<<derivada(pol) <<endl;break;
                            case 50:cout <<"Segundo polinomio ="<<pol1 <<endl;
                                    cout <<"Derivada del segundo polinomio="<<derivada(pol1) <<endl;break;
                            default: cout<<"Introduzca 1 o 2"<<endl;break;
                            }
                }
                break;
            }
            default: break;
        }
    }
}


