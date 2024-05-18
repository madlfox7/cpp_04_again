# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    protected:
        std::string type;
    public:
        Cat ( void );
        Cat (const string &type);
        Cat ( const Cat &src);
        virtual ~Cat ( void );
        Cat &operator=(const Cat &src);

        
        virtual void makeSound( void ) const;
        virtual string getType( void ) const;

};


# endif