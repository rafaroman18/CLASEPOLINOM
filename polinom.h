#ifndef _CLASEPOLINOM_POLINOM_H_
#define _CLASEPOLINOM_POLINOM_H_
#include <iostream>
#define N 3000
using namespace std;
class polinomio
{
public:
         polinomio(unsigned gM=1);
         unsigned grado();                //MIRAR SI HAY QUE QUITAR CONST
         double coeficiente(unsigned n);
         void coeficiente(unsigned n,double c);
private:
        unsigned gradoMAX;
        unsigned n;
        double vector[N];
};
#endif //_CLASEPOLINOM_POLINOM_H_

