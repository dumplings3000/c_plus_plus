#pragma once
#include<string>
#include<gun.h>
class solder
{
private:
    gun* _ptr_gun;
    std::string name;
    
public:
    solder(std::string name);
    ~solder();
    bool fire();
    void add_gun(gun *_ptr_gun);
    void addbullettogun(int num);
};