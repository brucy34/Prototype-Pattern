#include <iostream>
#include "Port1.h"

using namespace std;

int main()
{
    PrototypeFactory *prototype_factory= new PrototypeFactory();
    Client(*prototype_factory);
    delete prototype_factory;
    return 0;
}
