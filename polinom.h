#ifndef CLASEPOLINOM_POLINOM_H
#define CLASEPOLINOM_POLINOM_H
class polinomio{
public:
        int vector[gradoMAX];
        friend polinomio(unsigned );
        friend polinomio::grado()const;                //MIRAR SI HAY QUE QUITAR CONST
        friend double polinomio::coeficiente(unsigned )const;
        friend void polinomio::coeficiente(unsigned ,double );
private:
    unsigned gradoMAX;
    unsigned n;
};
#endif //CLASEPOLINOM_POLINOM_H

