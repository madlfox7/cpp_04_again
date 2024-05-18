# ifndef BRAIN_HPP
# define BRAIN_HPP

# include "AAnimal.hpp"

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain ( void );
        Brain ( const Brain &rhs);
        ~Brain ( void );
        Brain &operator=(const Brain & rhs);
    void setIdea(int index, const std::string &idea) {
        if (index >= 0 && index < 100) {
            _ideas[index] = idea;
        } else {
            std::cout << "Invalid index." << std::endl;
        }
    }

    // Function to get an idea from the Brain
    std::string getIdea(int index) const {
        if (index >= 0 && index < 100) {
            return _ideas[index];
        } else {
            std::cout << "Invalid index." << std::endl;
            return ""; // Return an empty string in case of invalid index
        }
    }
    //     void setIdea(int index, const std::string &idea);

    // // Get the idea at a specific index
    //     std::string getIdeas(int index) const;
};


# endif