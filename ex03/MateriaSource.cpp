# include "MateriaSource.hpp"


MateriaSource::MateriaSource() : _materiaCount(0)
{
    for (int i = 0; i < 4; ++i)
        this->_knownMaterias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < this->_materiaCount; ++i)
        delete this->_knownMaterias[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (m && this->_materiaCount < 4)
        this->_knownMaterias[this->_materiaCount++] = m;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
    for (int i = 0; i < this->_materiaCount; ++i)
    {
        if (this->_knownMaterias[i]->getType() == type)
            return this->_knownMaterias[i]->clone();
    }
    return NULL;
}