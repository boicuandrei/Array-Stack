#ifndef TEMAARRAY_H
#define TEMAARRAY_H
#endif // TEMAARRAY_H

namespace xtd {

template<class T>
class array{
    unsigned lg;
    T* arr_ptr;
public:
    array(const unsigned);
    array(const array&);
    array& operator= (const array&);
    T& operator[] (unsigned);
    void fill(T);
    unsigned size() const;
    ~array();
};

template<class T>
array<T>::array( const unsigned lgth) : lg(lgth),  arr_ptr(new T[lg])  { fill(0); }

template<class T>
array<T>::array(const array &sursa) {
    lg=sursa.lg;
    arr_ptr= new T[lg];
    for (unsigned i=0; i<lg; i++ ) arr_ptr[i]=sursa.arr_ptr[i]; }

template<class T>
array<T>& array<T>::operator =(const array& sursa) {
    if (this==&sursa) return *this;
    if (arr_ptr) delete[] arr_ptr;
    lg=sursa.lg;
    arr_ptr= new T[lg];
    for (unsigned i=0; i<lg; i++ ) arr_ptr[i]=sursa.arr_ptr[i];
    return *this; }

template<class T>
T& array<T>::operator[] (unsigned index) { return arr_ptr[index]; }

template<class T>
void array<T>::fill(T n) { for (unsigned i=0; i<lg; i++ ) arr_ptr[i]=n; }

template<class T>
unsigned array<T>::size() const { return lg; }

template<class T>
array<T>::~array() { delete[] arr_ptr; }

}


