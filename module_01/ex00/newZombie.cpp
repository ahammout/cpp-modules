#include"Zombie.hpp"



Zombie* newZombie( std::string name)
{
    Zombie *zombie;

    zombie = new Zombie;
    zombie->newZombie(name);
    return (zombie);
}