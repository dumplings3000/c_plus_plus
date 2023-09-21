#include "solder.h"
#include "gun.h"
void test()
{
    solder solder1("solder1");
    solder1.add_gun(new gun("ak47"));
    solder1.addbullettogun(20);
    solder1.fire();
}
int main()
{
    test();
    return 0;
}