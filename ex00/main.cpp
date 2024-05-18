#include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "Dog.hpp"
#include "Cat.hpp"
# include "WrongCat.hpp"


int main( void ) 
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); 
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
    }
return 0;


//     //WrongAnimal
//    {
//         cout << "- - Testing WrongCat class- - "<<endl;
//         const WrongAnimal* meta = new WrongAnimal();
//         const WrongAnimal* i = new WrongCat();
//         std::cout << i->getType() << " " << std::endl;
//         i->makeSound(); 
//         meta->makeSound();
//         delete meta;
//         delete i;
//    }

//     {
//         cout << "-- Testing Animal class --" << endl;
//         Animal animal;
//         cout << "Animal type: " << animal.getType() << endl;
//         animal.makeSound();
//     }

//     {
//         cout << "-- Testing Dog class --" << endl;
//         Dog dog;
//         cout << "Dog type: " << dog.getType() << endl;
//         dog.makeSound();
//     }


//     {
//         cout << "-- Testing Cat class --" << endl;
//         Cat cat;
//         cout << "Cat type: " << cat.getType() << endl;
//         cat.makeSound();
//     }

//     {
//         cout << "-- Testing polymorphism --" << endl;
//         Animal* animalPtr = NULL;

//         cout << "Creating a Dog object through Animal pointer:" << endl;
//         animalPtr = new Dog();
//         cout << "Animal type: " << animalPtr->getType() << endl;
//         animalPtr->makeSound();
//         delete animalPtr;

//         cout << "Creating a Cat object through Animal pointer:" << endl;
//         animalPtr = new Cat();
//         cout << "Animal type: " << animalPtr->getType() << endl;
//         animalPtr->makeSound();
//         delete animalPtr;
//     }

   // return 0;
}


