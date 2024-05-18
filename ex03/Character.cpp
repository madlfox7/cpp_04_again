#include "Character.hpp"


Character::Character ( void )
{
    //cout << "Character default destructor called"<<endl;
}


Character::Character(const std::string& name) : _name(name)
    {
        for (int i = 0; i < 4; ++i)
        {
            _inventory[i] = NULL;
        }
    }

    Character::Character(const Character& other) : _name(other._name)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }

    Character& Character::operator=(const Character& other)
    {
        if (this != &other)
        {
            _name = other._name;
            for (int i = 0; i < 4; ++i)
            {
                if (_inventory[i])
                    delete _inventory[i];
                if (other._inventory[i])
                    _inventory[i] = other._inventory[i]->clone();
                else
                    _inventory[i] = NULL;
            }
        }
        return *this;
    }

Character::~Character()
    {
        for (int i = 0; i < 4; ++i)
        {
            if (_inventory[i])
                delete _inventory[i];
        }
    }

const std::string& Character::getName() const { return _name; }

void Character::equip(AMateria* m)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (!_inventory[i])
            {
                _inventory[i] = m;
                return;
            }
        }
    }

void Character::unequip(int idx)
    {
        if (idx >= 0 && idx < 4)
            _inventory[idx] = NULL;
    }

void Character::use(int idx, ICharacter& target)
    {
        if (idx >= 0 && idx < 4 && _inventory[idx])
        {
            _inventory[idx]->use(target);
        }
    }