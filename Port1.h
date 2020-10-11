#ifndef PORT1_H_INCLUDED
#define PORT1_H_INCLUDED

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

enum Type
{
    PROTOTYPE_1=0,PROTOTYPE_2
};

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
      :Prototype(prototype_name),concrete_prototype_field1_(concrete_prototype_field){};

      Prototype *Clone() const override;
private:
    float concrete_prototype_field1_;
};

class ConcretePrototype2:public Prototype
{
public:
    ConcretePrototype2(string prototype_name,float concrete_prototype_field)
      :Prototype(prototype_name),concrete_prototype_field2_(concrete_prototype_field){};

      Prototype *Clone() const override;
private:
    float concrete_prototype_field2_;
};

class PrototypeFactory
{
public:
    PrototypeFactory();
    ~PrototypeFactory();
    Prototype *CreatePrototype();

private:
    std::unordered_map<Type, Prototype *, std::hash<int>> prototypes_;//problem with the template
};
void Client (PrototypeFactory &prototype_factory);
#endif // PORT1_H_INCLUDED
