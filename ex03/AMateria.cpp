#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : _type(type) 
{
  // cout << "AMateria parameterized constructor called"<<endl;
}


AMateria::~AMateria( void ) 
{
   // cout << "AMateria destructor called"<<endl;
}

const std::string& AMateria::getType() const 
{ 
   // cout << "AMateria GetType member funct called"<<endl;
    return this->_type; 
}