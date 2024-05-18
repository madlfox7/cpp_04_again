# ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain ( void );
        Brain ( const Brain &rhs);
        ~Brain ( void );
        Brain &operator=(const Brain & rhs);


        //test functions 
        void setIdea(int index, const string &idea); 
        string getIdea(int index) const ;
};


# endif