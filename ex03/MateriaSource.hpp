#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* _knownMaterias[4]; 
    int _materiaCount; 

public:
    MateriaSource();
    virtual ~MateriaSource();

    virtual void learnMateria(AMateria* m);
    virtual AMateria* createMateria(const std::string& type);
};




#endif