# include "Cure.hpp"

 Cure::Cure( void ) : AMateria("cure") 
 {
   // cout << "Cure default constructor called"<<endl;
 }

Cure::~Cure( void ) 
{
   // cout <<"Cure destructor called"<<endl;
}

AMateria* Cure::clone() const 
{ 
    return new Cure(); 
}

void Cure::use(ICharacter& target) 
{ 
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}