#include <iostream>

class Animal
{
public:
    virtual void voice()
    {
        std::cout << "\n";
    }
};

class Dog : public Animal
{
public:
    void voice() override
    {
        std::cout << "Woof!\n";
    }
};

class Cat : public Animal
{
public:
    void voice() override
    {
        std::cout << "Meow!\n";
    }
};

class Cow : public Animal
{
public:
    void voice() override
    {
        std::cout << "Moo!\n";
    }
};

int main()
{
    Animal* animals[3] = { new Dog, new Cat, new Cow };

    for (int i = 0; i < 3; i++)
    {
        animals[i]->voice();
        delete animals[i];
    }
}
