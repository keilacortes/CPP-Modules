#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include <cassert>

int main()
{
    Dog originalDog;
    originalDog.getBrain()->ideas[0] = "find a bone";
    originalDog.getBrain()->ideas[99] = "follow a scent";
    Dog copiedDog(originalDog);
    assert(copiedDog.getBrain()->ideas[0] == "find a bone");
    assert(copiedDog.getBrain()->ideas[99] == "follow a scent");
    assert(copiedDog.getBrain() != originalDog.getBrain());
    copiedDog.getBrain()->ideas[0] = "chase a ball";
    assert(originalDog.getBrain()->ideas[0] == "find a bone");

    Dog assignedDog;
    assignedDog = originalDog;
    assert(assignedDog.getBrain()->ideas[0] == "find a bone");
    assert(assignedDog.getBrain()->ideas[99] == "follow a scent");
    assert(assignedDog.getBrain() != originalDog.getBrain());
    assignedDog.getBrain()->ideas[0] = "guard the house";
    assert(originalDog.getBrain()->ideas[0] == "find a bone");

    Cat originalCat;
    originalCat.getBrain()->ideas[0] = "watch the birds";
    originalCat.getBrain()->ideas[99] = "nap on the sofa";
    Cat copiedCat(originalCat);
    assert(copiedCat.getBrain()->ideas[0] == "watch the birds");
    assert(copiedCat.getBrain()->ideas[99] == "nap on the sofa");
    assert(copiedCat.getBrain() != originalCat.getBrain());
    copiedCat.getBrain()->ideas[0] = "sleep in the sun";
    assert(originalCat.getBrain()->ideas[0] == "watch the birds");

    Cat assignedCat;
    assignedCat = originalCat;
    assert(assignedCat.getBrain()->ideas[0] == "watch the birds");
    assert(assignedCat.getBrain()->ideas[99] == "nap on the sofa");
    assert(assignedCat.getBrain() != originalCat.getBrain());
    assignedCat.getBrain()->ideas[0] = "climb the curtains";
    assert(originalCat.getBrain()->ideas[0] == "watch the birds");

    const Animal *animals[4];
    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();

    for (int i = 0; i < 4; ++i)
    {
        std::cout << animals[i]->getType() << ": ";
        animals[i]->makeSound();
    }
    for (int i = 0; i < 4; ++i)
        delete animals[i];

    return 0;
}
