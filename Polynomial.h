#ifndef _POLYNOMIAL_H_
#define _POLYNOMIAL_H_
    
#include "Node.h"

class polynomial
{
private:

Node<ItemType>* headPtr; // Pointer to first node
int polyCount;

public:

List();
void insert( const ItemType& newEntry ); // Insert at beginning of list
void print(); // Display list contents to standard output

};

#endif
