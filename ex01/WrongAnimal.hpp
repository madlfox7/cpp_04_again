# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include "Animal.hpp"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal ( void );
        WrongAnimal (const string &type);
        WrongAnimal ( const  WrongAnimal  &src);
        virtual ~ WrongAnimal  ( void );
        WrongAnimal  &operator=(const  WrongAnimal  &src);

        
        void makeSound( void ) const ;
        virtual string getType( void ) const ;
};


# endif