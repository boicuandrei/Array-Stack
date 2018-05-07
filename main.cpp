#include <iostream>
#include "temastack.h"

int main()
{

    //test array class
    unsigned n=8;
    xtd::array<int> a(n);
    a[3]=789;
    for (int i=0; i<a.size(); i++) std::cout<<a[i]<<" ";
    std::cout<<std::endl;
    xtd::array<int> b=a;
    xtd::array<int> c(5);
    c=b;
    c[4]=111;
    for (int i=0; i<c.size(); i++) std::cout<<c[i]<<" ";
    std::cout<<std::endl;

    //test stack class
    xtd::stiva<int> S(10);
    if ( S.is_empty() );
    S.pop();
    std::cout<<S.peek()<<std::endl;
    if ( true==S.is_empty() ) std::cout<<"E goala\n\n";
    S.push(45);
    S.push(55);
    S.push(65);
    S.is_empty();
    S.is_full();

    std::cout<<S.peek()<<std::endl;
    std::cout<<S;


}
