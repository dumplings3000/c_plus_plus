#include "solder.h"
#include <iostream>
using namespace std;

solder::solder(string name)
{
    this->name = name;
    this->_ptr_gun = nullptr;
}

solder::~solder()
{
    if (this->_ptr_gun == nullptr)
    {
        return;
    };
    delete this->_ptr_gun;
    this->_ptr_gun = nullptr;
}

bool solder::fire()
{
    this->_ptr_gun->shoot();
}

void solder::add_gun(gun *ptr_gun)
{
    this->_ptr_gun = ptr_gun;
}

void solder::addbullettogun(int num)
{
    this->_ptr_gun->add_bullet(num);
}