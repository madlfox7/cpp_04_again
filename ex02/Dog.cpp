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
     this->_brain = new Brain();
}

Dog::~Dog ( void )
{
    cout << "Default Dog destructor called"<<endl;
    delete _brain;
}


Dog::Dog ( const string &type)
{
    this->type = type;
}



Dog::Dog(const Dog &src) : AAnimal(src)
{
    cout << "Default Dog copy constructor called" << endl;
    this->type = src.type;
    this->_brain = new Brain(*src._brain);
}

Dog &Dog::operator=(const Dog &src)
{
    if (this != &src)
    {
        this->type = src.type;
        delete _brain; 
        this->_brain = new Brain(*src._brain);
    }
    return *this;
}

//for test
void Dog::getIdeas( void ) const
{
    for (int i = 0; i < 3; ++i) 
        cout << "[" << i << "]: " << _brain->getIdea(i) << endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
        _brain->setIdea(index, idea); 
}
