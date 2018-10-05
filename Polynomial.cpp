#include "Polynomial.h"
#include "Node.h"
#include <cstddef>
#include <iostream>
#include <cmath>

using namespace std;

template<class ItemType>
Polynomial<ItemType>::Polynomial()
{
    headPtr = nullptr;
}

template<class ItemType>
void Polynomial<ItemType>::insert( const ItemType& newEntry )    // inserts term at the front
{
    Node<ItemType>* nextPtr = new Node<ItemType>(newEntry, headPtr);
    headPtr = nextPtr;
}

template<class ItemType>
double Polynomial<ItemType>::solve(double x)    // solves polynomial and returns the sum
{
    double sum = 0;
    Node<ItemType>* curPtr = headPtr;

    while (curPtr != nullptr)    //traverses through linked list
    {
        double c = (curPtr->getItem()).first;    //gets the constant out of the term
        unsigned k = (curPtr->getItem()).second;  //gets the exponent out of the term
        
        sum = sum+(c*pow(x,k));  //sums
        
        curPtr = curPtr->getNext();
    }
    return sum;
}
