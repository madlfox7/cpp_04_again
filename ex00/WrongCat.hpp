#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include "WrongAnimal.hpp"



class WrongCat : public WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongCat ( void );
        WrongCat (const string &type);
        WrongCat ( const WrongCat &src);
        virtual ~WrongCat ( void );
        WrongCat &operator=(const WrongCat &src);
        
        void makeSound( void ) const;
        virtual string getType( void ) const;

};


# endif