#include "Port1.h"

using namespace std;

Prototype::Prototype virtual void Method(float prototype_field)
{
    this->prototype_field_=prototype_field;
    cout<<"Call method from "<<prototype_name_<<"with field: "<<prototype_field<<endl;
}
