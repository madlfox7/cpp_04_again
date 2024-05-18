# include "Brain.hpp"


Brain::Brain ( void )
{
    cout << "Default Brain constructor"<<endl;
      for (int i = 0; i < 100; i++)
        this->_ideas[i] = "";
}

Brain::Brain ( const Brain &rhs)
{
    cout << "Brain copy constructor"<<endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
}

Brain::~Brain ( void )
{
    cout << "Default Brain destructor"<<endl;
}


Brain &Brain::operator=(const Brain& rhs)
{
    cout << "Brain copy assignment operator"<<endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = rhs._ideas[i];
    }
    return *this;
}






//TEST
