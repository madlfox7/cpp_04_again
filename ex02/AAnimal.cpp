# include "AAnimal.hpp"



void AAnimal::makeSound ( void ) const
{
    cout << "Unknown animal sound"<<endl;
}

AAnimal::AAnimal ( void )
{
    cout << "Default Animal constructor called"<<endl;
}

AAnimal::~AAnimal ( void )
{
    cout << "Default Animal destructor called"<<endl;
}


AAnimal::AAnimal ( const string &type)
{
    this->type = type;
}

AAnimal::AAnimal ( const AAnimal &src)
{
    cout << "Default Animal copy constructor called"<<endl;
    *this = src;
}


AAnimal &AAnimal::operator=(const AAnimal &src)
{
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}

string AAnimal::getType( void ) const 
{
    return this->type;
}