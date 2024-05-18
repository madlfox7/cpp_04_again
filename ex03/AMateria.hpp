#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

class ICharacter;


class AMateria
{
protected:
    std::string _type;
public:
    AMateria(const std::string& type);
    virtual ~AMateria( void );
    
    const std::string& getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};



# endif
