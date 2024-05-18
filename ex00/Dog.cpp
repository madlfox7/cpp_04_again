# include "Dog.hpp"



string Dog::getType( void ) const 
{
    return this->type;
}

void Dog::makeSound ( void ) const 
{
    cout << "Woof!"<<endl;
}

Dog::Dog ( void )
{
    cout << "Default Dog constructor called"<<endl;
    this->type = "Dog";
}

Dog::~Dog ( void )
{
    cout << "Default Dog destructor called"<<endl;
}


Dog::Dog ( const string &type)
{
    this->type = type;
}

Dog::Dog ( const Dog &src) : Animal(src)
{
    cout << "Default Dog copy constructor called"<<endl;
    *this = src;
}


Dog &Dog::operator=(const Dog &src)
{
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}