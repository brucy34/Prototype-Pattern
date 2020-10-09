#ifndef PORT1_H_INCLUDED
#define PORT1_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Prototype
{
public:
    Prototype();
    Prototype(string prototype_name):prototype_name_(prototype_name){};

    virtual ~Prototype();
    virtual Prototype *Clone() const=0;
    virtual void Method(float prototype_field);

protected:
    string prototype_name_;
    float prototype_field;
};

#endif // PORT1_H_INCLUDED
