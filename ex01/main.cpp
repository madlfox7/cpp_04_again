#include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "Dog.hpp"
#include "Cat.hpp"
# include "WrongCat.hpp"



int main( void )
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;//should not create a leak
        delete i;
        //....
    }

    const int arraySize = 6;
    Animal* animal_array[arraySize];

    for (int i = 0; i < arraySize / 2; i++)
    {
        animal_array[i] = new Dog();
        cout << "Index [" << i << "] Filled with Dog" << endl;
    }

    for (int i = arraySize / 2; i < arraySize; i++)
    {
        animal_array[i] = new Cat();
        cout << "Index [" << i << "] Filled with Cat" << endl;
    }

    cout << endl;

    for (int i = 0; i < arraySize; i++)
    {
        delete animal_array[i];
    }
    return 0;
}






// //deep copy Test1 => ideas and Brain's are independent
// //shallow copy => same obj by reference, obj-s are dependent from each other


// int main( void )
// {
//     Dog adam;
//     cout << "In the beginning, there was Dog Adam!"<<endl;
//     adam.setIdea(0, "I'm Adam, the alpha dog!");
//     adam.setIdea(1, "I bark, therefore I am!");

//     cout << "Then, Dog Eve came into existence!" << endl;
//     Dog eve = adam;

//     cout << "Adam's initial woofs:" << endl;
//     adam.getIdeas();

//     cout << "Eve's initial thoughts (copy of Adam's):" << endl;
//     eve.getIdeas();

//     cout << "Adam starts pondering the doggy mysteries of life..." << endl;
//     adam.setIdea(0, "Who's this Eve Dog?");
//     adam.setIdea(1, "Is there more to life than just treats?");

//     cout << "Adam's deep doggy thoughts:" << endl;
//     adam.getIdeas();

//     cout << "Eve remains ignorant of Adam's existential crisis:" << endl;
//     eve.getIdeas();

//     cout << "Eve starts to realize herself..." << endl;
//     eve.setIdea(0, "Hold on, I am not Adam, I am Eve!!");
//     eve.setIdea(1, "Why do I smell Adam's thoughts in the air?");

//     cout << "\nEve's thoughts" << endl;
//     eve.getIdeas();

//     cout << "Adam's thoughts" << endl;
//     adam.getIdeas();


//     return 0;
// }
