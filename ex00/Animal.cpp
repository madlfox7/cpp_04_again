# include "Animal.hpp"



void Animal::makeSound ( void ) const
{
    cout << "Unknown animal sound"<<endl;
}

Animal::Animal ( void )
{
    cout << "Default Animal constructor called"<<endl;
    this->type = "Unknown";
}

Animal::~Animal ( void )
{
    cout << "Default Animal destructor called"<<endl;
}


Animal::Animal ( const string &type)
{
    this->type = type;
}

Animal::Animal ( const Animal &src)
{
    cout << "Default Animal copy constructor called"<<endl;
    *this = src;
}


Animal &Animal::operator=(const Animal &src)
{
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}

string Animal::getType( void ) const 
{
    return this->type;
}


