#include "arit_polinom.h"
#include <iostream>

using namespace std;

polinomio operator + (polinomio pol1, polinomio pol2)
{

    int NewGrad = max( pol1.grado(), pol2.grado() );

    polinomio Suma(NewGrad);

    for(int i=0; i<=NewGrad; i++)
    {
        Suma.coeficiente(i, pol1.coeficiente(i)+pol2.coeficiente(i) );
    }

    return Suma;
}

polinomio operator-(polinomio pol1, polinomio pol2)
{
    int NewGrad = max( pol1.grado(), pol2.grado() );

    polinomio Resta(NewGrad);

    for(int i = 0 ; i <= NewGrad ; i++)
    {
        Resta.coeficiente(i, pol1.coeficiente(i)-pol2.coeficiente(i) );
    }
    return Resta;
}

polinomio operator*(polinomio pol1, polinomio pol2)
{

    int NewGrad =  pol1.grado()+pol2.grado();

    polinomio Prod(NewGrad);
    double Suma = 0;
    for(int i = pol1.grado(); i >= 0; i--)
    {
        for(int j = pol2.grado(); j >= 0; j--)
        {
            Suma = Prod.coeficiente(i+j);
            Prod.coeficiente(i+j, Suma + pol1.coeficiente(i) * pol2.coeficiente(j) );

        }
    }

    return Prod;
}

polinomio derivada(polinomio pol)
{

    polinomio Derivada(pol.grado()-1);

    for(int i=pol.grado()-1; i>=0 ; i--)
    {
        Derivada.coeficiente(i, (i+1)*pol.coeficiente(i+1) );
    }

    return Derivada;
}