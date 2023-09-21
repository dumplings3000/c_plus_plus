#include "gun.h"
#include <iostream>
using namespace std;

void gun::add_bullet(int bullet_num)
{
    this->bullet_count += bullet_num;
}

bool gun::shoot()
{
    if (this->bullet_count <= 0)
    {
        cout << "there is not bullet" << endl;
        return false;
    }
    cout << "shoot" << endl;
    this->bullet_count -= 1;
    return true;
}