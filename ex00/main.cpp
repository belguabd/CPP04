#include "Dog.hpp"
#include "Cat.hpp"

// void f(){
//     system("leaks Animal");
// }

int main()
{
    // atexit(f);
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << i->getType() << " " << std::endl;
    std::cout << "==>>" << std::endl;
    i->makeSound(); // will output the cat sound!
    std::cout << "==>>";
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    return 0;
}
