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
    this->_brain = new Brain();
}

Cat::~Cat ( void )
{
    cout << "Default Cat destructor called"<<endl;
    delete _brain;
}


Cat::Cat ( const string &type)
{
    this->type = type;
}

Cat::Cat ( const Cat &src) : AAnimal(src)
{
    cout << "Default Cat copy constructor called"<<endl;
    this->_brain = new Brain(*src._brain);
}


Cat &Cat::operator=(const Cat &src)
{
    if (this != &src)
    {
        this->type = src.type;
        delete _brain;
        this->_brain = new Brain(*src._brain);
    }
    return *this;
}

//t
void Cat::getIdeas( void ) const
{
    for (int i = 0; i < 3; ++i) 
        cout << "[" << i << "]: " << _brain->getIdea(i) << endl;
}

void Cat::setIdea(int index, const string &idea)
{
        _brain->setIdea(index, idea); 
}
