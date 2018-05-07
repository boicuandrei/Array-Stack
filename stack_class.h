#ifndef STACK_CLASS_H
#define STACK_CLASS_H
#include <iostream>

#include "array_class.h"

namespace xtd {

template <class T>
class stiva
{
    array<T> arrstv;
    unsigned indx;
public:
    stiva(unsigned dim) : arrstv(dim), indx(0) { }

    push(T val)    {
        if ( is_full() ) { std::cout<<"Stiva este plina, operatie esuata\n\n"; }
        else { (arrstv)[indx]=val;  indx++; }          }

    T pop()    {
        if ( is_empty() ) { return 222; }
        else  { indx--;  return arrstv[indx+1]; }    }

    T peek() {
        if ( is_empty() ) { return 333; }
        else  { return (arrstv)[indx-1]; }     }

    bool is_empty() { return (0==indx);  }

    bool is_full() { return (arrstv.size()==indx-1 ); }

    ~stiva() { }

    template<class Y>
    friend std::ostream& operator<< (std::ostream&, stiva<Y>& );
};

template<class Y>
std::ostream& operator<< (std::ostream& flux, stiva<Y>& sursa)
{
    flux<<"Aceasta este o STIVA cu capacitate de: "<<sursa.arrstv.size() <<" elemnte. \nAcum ea contine urmatoarele valori: \n";
    for (unsigned j=0; j<sursa.indx; j++) flux<<sursa.arrstv.operator [](j)<<" ";
    flux<<std::endl<<std::endl;
    return flux;
}

}

#endif // STACK_CLASS_H
