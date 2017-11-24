#include <iostream>
#include "polinom.h"

polinomio::polinomio(unsigned gM):gradoMAX(gM)  //CONSTRUCTOR
{
    unsigned i;
    for(i=0;i<=gM;i++)
    {
        vector[i]=1;

    }
    for(i=N;i>gradoMAX;i--)
    {
        vector[i]=0;
    }
}

unsigned polinomio::grado() const
{
    return gradoMAX;
}

double polinomio::coeficiente(unsigned n) const
{
    if(n>gradoMAX)
    {
        return 0;
    }

    else

        return vector[n];
}


void polinomio::coeficiente(unsigned n, double c)
{
    if(n>gradoMAX)
    {
        std::cout<<"ERROR: N MAYOR QUE GRADOMAX"<<std::endl;
    }
    else
        vector[n]=c;;
}