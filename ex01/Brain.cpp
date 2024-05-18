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
    cout << "Brain destructor"<<endl;
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



////test functions


void Brain::setIdea(int index, const string &idea)
{
        if (index >= 0 && index < 100) 
            _ideas[index] = idea;
         else 
            cout << "Invalid index." << endl;
}





string Brain::getIdea(int index) const
{
        if (index >= 0 && index < 100) 
            return _ideas[index];
        else
         {
            cout << "Invalid index." << std::endl;
            return ""; //inv index 
        }
}



