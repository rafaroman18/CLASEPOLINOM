#include <iostream>
#include "polinom.h"
using namespace std;
int main()
{
    polinomio pol(6);
    pol.coeficiente(4,3);
    cout<<pol.coeficiente(4)<<endl;
    cout<<pol.coeficiente(6)<<endl;
    cout<<pol.coeficiente(7)<<endl;
    cout<<pol.grado()<<endl;




    return 0;
}