#pragma once
#include <string>

class gun
{
private:
    int bullet_count;
    std::string _type;

public:
    gun(std::string type)
    {
        this->bullet_count = 0;
        this->_type = type;
    }
    void add_bullet(int bullet_num);
    bool shoot();
};
