#include "Port1.h"

using namespace std;

Prototype::virtual void Method(float prototype_field)
{
    this->prototype_field_=prototype_field;
    cout<<"Call method from "<<prototype_name_<<"with field: "<<prototype_field<<endl;
}

 ConcretePrototype1::Prototype *Clone() const override
 {
     return new ConcretePrototype1(*this);
 }

 ConcretePrototype2::Prototype *Clone() const override
 {
     return new ConcretePrototype2(*this);
 }

 PrototypeFactory::PrototypeFactory()
 {
     prototypes_[Type::PROTOTYPE_1]=new ConcretePrototype1("PROTOTYPE_1",50.f);
     prototypes_[Type::PROTOTYPE_2]=new ConcretePrototype1("PROTOTYPE_2",50.f);
 }

 PrototypeFactory::~PrototypeFactory()
 {
     delete prototypes_[Type::PROTOTYPE_1];
     delete prototypes_[Type::PROTOTYPE_2];
 }

 PrototypeFactory::Prototype *CreatePrototype(Type type)
 {
     return prototypes_[type]->Clone();
 }
