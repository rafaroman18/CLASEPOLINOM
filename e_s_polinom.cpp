#include <iostream>
#include "e_s_polinom.h"
using namespace std;
ostream& operator << (ostream& os, const polinomio& pol)
{
    for(int i=pol.grado(); i>=0 ; i--)
    {
        if(i==0) os << pol.coeficiente(i) << "  " ;
        else os << pol.coeficiente(i) << "x^" << i << " + " ;
    }
    return os;
}

istream& operator >> (istream& in, polinomio& pol)
{
    double coeficiente;

    for(int i = pol.grado(); i>=0 ; i--)
    {
        cout << "Introduzca Coeficiente de Grado " << i <<" : " ;
        in >> coeficiente;
        pol.coeficiente(i, coeficiente);
    }
    cout << endl;
    return in;
}

polinomio load_polinom(){
    unsigned int exp;
    cout << "Introduzca Grado del Polinomio : " ;
    cin >> exp;
    cout << endl;
    polinomio pol(exp);
    pol.coeficiente(exp, 1);
    cout<< "\n";
    cin >> pol;

    return pol;
}