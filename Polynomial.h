#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
    
#include "Node.h"

class Polynomial
{
private:

Node<ItemType>* headPtr; // Pointer to first node
int polyCount;

public:

Polynomial();
void insert( const ItemType& newEntry ); // Insert at beginning
void print(); // Display to standard output

};

#endif
