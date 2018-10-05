#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
    
#include "Node.h"

template<class ItemType>
class Polynomial
{
    private:
        Node<ItemType>* headPtr;    // Pointer to first node

    public:
        Polynomial();
        void insert( const ItemType& newEntry );    // inserts term into beginning of polynomial
        double solve(double x);    // solves polynomial
};

#include"Polynomial.cpp"
#endif