# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


class Animal
{
    protected:
        std::string type;
    public:
        Animal ( void );
        Animal (const string &type);
        Animal ( const Animal &src);
        virtual ~Animal ( void );
        Animal &operator=(const Animal &src);
        
        virtual void makeSound( void ) const ;
        virtual string getType( void ) const ;
};

# endif