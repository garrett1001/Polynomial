#include <iostream>
#include "Polynomial.h"

int main()
{
    polynomial poly;
    
    string input;
    while( cin >> input )
            poly.insert( input );

    poly.print();
  
    
    return 0;
}
