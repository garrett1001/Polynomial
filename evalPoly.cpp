#include<iostream>
#include<sstream>   // for istringstream
#include<utility>
#include<vector>
#include<string>
#include<algorithm>
#include "Polynomial.h"

using namespace std;

vector<string> split( const string& s , char delimiter ) //splits an input
{
   vector<string> terms;         // vector of terms
   string term;                  // a single term
   istringstream termStream(s);  // an input string stream
   
   while( getline( termStream , term , delimiter ) )
        terms.push_back(term);    // add found term

   return terms;
}

int main()
{
    string input;             // input string
    string input2;
    char   delimiter = ' ';   // what separates terms in the input string
    int run = 1;
    pair <double, unsigned> CTERM;
    
    while(getline( cin , input ))    // runs while there is valid input
    {
        Polynomial<pair<double, unsigned>> poly;
        CTERM.first = 0;    // constant
        CTERM.second = 0;    //exponet
        int space = 0;

        //getline( cin , input );    // read in a string as a line of text from standard input

        vector<string> listOfTerms = split( input , delimiter );    // Use the split() function above to extract terms
    
        reverse(listOfTerms.begin(),listOfTerms.end());

        for( auto term : listOfTerms ) // Use range-based for loop to iterate through terms
        {    
            stringstream convert(term); // object from the class stringstream 
         
            convert >> CTERM.first;    // converts string to double
        
            if(CTERM.first != 0)
            {
            poly.insert(CTERM); //inserts term into beginning of polynomial
            }
            CTERM.second++;    // increments exponet      
        }
    
        getline( cin , input2 );    // read in a string as a line of text from standard input

        vector<string> listOfXs = split( input2 , delimiter );    // Use the split() function above to extract Xs
    
        for( auto term : listOfXs )    // Use range-based for loop to iterate through Xs
        {
            stringstream convert(term); // object from the class stringstream
            double x = 0;
        
            convert >> x;    // converts string to int
            
            while(space>0)
            {
                cout<<" ";
                space--;
            }
            
            if(space==0)
            {
                space++;
            }
            
            cout<<poly.solve( x );    // solves and outputs solved polynomial
        }
        cout<<endl;
    }
    
    return 0;
}
