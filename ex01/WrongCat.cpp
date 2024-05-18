# include "WrongCat.hpp"


string WrongCat::getType( void ) const 
{
    return this->type;
}

void WrongCat::makeSound ( void ) const
{
    cout << "Meow!"<<endl;
}

WrongCat::WrongCat ( void )
{
    cout << "Default WrongCat constructor called"<<endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat ( void )
{
    cout << "Default WrongCat destructor called"<<endl;
}


WrongCat::WrongCat ( const string &type)
{
    this->type = type;
}

WrongCat::WrongCat ( const WrongCat &src) : WrongAnimal(src)
{
    cout << "Default WrongCat copy constructor called"<<endl;
    *this = src;
}


WrongCat &WrongCat::operator=(const WrongCat &src)
{
    cout << "WrongCat copy assignment operator called"<<endl;
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}
