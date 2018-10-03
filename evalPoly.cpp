#include <iostream>
#include <string>
#include "Polynomial.h"

using namespace std;

int main()
{
    polynomial<string> poly;
    
    string input;
    while( cin >> input )
            poly.insert( input );

    poly.print();
  
    
    return 0;
}
