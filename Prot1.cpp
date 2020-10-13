#include "Port1.h"

using namespace std;


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
     prototypes_[Type::PROTOTYPE_2]=new ConcretePrototype1("PROTOTYPE_2",60.f);
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

 void Client (PrototypeFactory &prototype_factory)
 {
     cout<<"Creons le Prototype 1\n";

     Prototype *prototype=prototype_factory.CreatePrototype(Type::PROTOTYPE_1);
     prototype->Method(90);
     delete prototype;
     cout<<"\n";

     cout<<"Creons le Prototype 2\n";

     prototype=prototype_factory.CreatePrototype(Type::PROTOTYPE_2);
     prototype->Method(20);
     delete prototype;
 }
