#include "Ice.hpp"


Ice::Ice( void ) : AMateria("ice")
{
   // cout <<"Ice default constructor called"<<endl;
}


Ice::~Ice( void )
{
   // cout << "Ice destructor called"<<endl;
}

AMateria* Ice::clone() const 
{ 
    return new Ice(); 
}

void Ice::use(ICharacter& target) 
{ 
    cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}