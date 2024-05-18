#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
    protected:
        std::string type;
    public:
        Dog ( void );
        Dog (const string &type);
        Dog ( const Dog &src);
        virtual ~Dog ( void );
        Dog &operator=(const Dog &src);
        
        virtual void makeSound( void ) const; 
        virtual string getType( void ) const ;
};

# endif