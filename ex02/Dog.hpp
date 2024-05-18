#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"


class Dog : public AAnimal
{
    protected:
        std::string type;
        Brain *_brain;
    public:
        Dog ( void );
        Dog (const string &type);
        Dog ( const Dog &src);
        virtual ~Dog ( void );
        Dog &operator=(const Dog &src);
        virtual void makeSound( void ) const; 
        virtual string getType( void ) const ;

        //
        void getIdeas( void ) const ;
        void setIdea(int index, const string &idea);
};

# endif