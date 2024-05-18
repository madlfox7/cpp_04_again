# include "Cat.hpp"




string Cat::getType( void ) const 
{
    return this->type;
}

void Cat::makeSound ( void ) const
{
    cout << "Meow!"<<endl;
}

Cat::Cat ( void )
{
    cout << "Default Cat constructor called"<<endl;
    this->type = "Cat";
}

Cat::~Cat ( void )
{
    cout << "Cat destructor called"<<endl;
}


Cat::Cat ( const string &type)
{
    this->type = type;
}

Cat::Cat ( const Cat &src) : Animal(src)
{
    cout << "Cat copy constructor called"<<endl;
    *this = src;
}


Cat &Cat::operator=(const Cat &src)
{
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}