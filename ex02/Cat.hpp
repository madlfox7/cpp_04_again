# ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
    protected:
        std::string type;
        Brain *_brain;
    public:
        Cat ( void );
        Cat (const string &type);
        Cat ( const Cat &src);
        virtual ~Cat ( void );
        Cat &operator=(const Cat &src);
        virtual void makeSound( void ) const;
        virtual string getType( void ) const;

        //
        void getIdeas( void ) const ;
        void setIdea(int index, const string &idea) ;
};


# endif