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

class ConcretePrototype1:public Prototype
{
public:
    ConcretePrototype1(string prototype_name,float concrete_prototype_field)
      :prototype(prototype_name),concrete_prototype_field1_(concrete_prototype_field){};

      Prototype *Clone() const override;
private:
    float concrete_prototype_field1_;
};

class ConcretePrototype2:public Prototype
{
public:
    ConcretePrototype2(string prototype_name,float concrete_prototype_field)
      :prototype(prototype_name),concrete_prototype_field2_(concrete_prototype_field){};

      Prototype *Clone() const override;
private:
    float concrete_prototype_field2_;
};
#endif // PORT1_H_INCLUDED
