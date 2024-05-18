# include "WrongAnimal.hpp"



void  WrongAnimal ::makeSound ( void ) const
{
    cout << "Unknown alien Animal sound"<<endl;
}

WrongAnimal ::WrongAnimal  ( void )
{
    cout << "Default  WrongAnimal  constructor called"<<endl;
}

WrongAnimal::~ WrongAnimal ( void )
{
    cout << "Default  WrongAnimal  destructor called"<<endl;
}


WrongAnimal::WrongAnimal  ( const string &type)
{
    this->type = type;
}

WrongAnimal::WrongAnimal  ( const  WrongAnimal  &src)
{
    cout << "Default  WrongAnimal  copy constructor called"<<endl;
    *this = src;
}


 WrongAnimal  &WrongAnimal::operator=(const  WrongAnimal  &src)
{
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}

string  WrongAnimal::getType( void ) const 
{
    return this->type;
}


