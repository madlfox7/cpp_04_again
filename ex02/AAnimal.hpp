# ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

//Abstract class -> at least one pure virtual function
//Abstrcat class can't have instances


class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal ( void );
        AAnimal (const string &type);
        AAnimal ( const AAnimal &src);
        virtual ~AAnimal ( void );
        AAnimal &operator=(const AAnimal &src);
        
        virtual void makeSound( void ) const = 0;
        virtual string getType( void ) const ;
};

# endif