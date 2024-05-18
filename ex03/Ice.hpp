#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
    Ice( void ) ;
    virtual ~Ice( void );
    virtual AMateria* clone() const ;
    virtual void use(ICharacter& target) ;
};




#endif