#include "concretesubject.h"

concreteSubject::concreteSubject()
{

}

void concreteSubject::registerObserver(Observer *o)
{
    obsList.push_back(o);

}

void concreteSubject::removeObserver(Observer *o)
{
    auto iterator = std::find(obsList.begin(), obsList.end(), o);

    if (iterator != obsList.end()) {
        obsList.erase(iterator);
}
}

void concreteSubject::notifyObservers()
{
    for(auto observer : obsList)
    {
        observer->update();
    }
}

void concreteSubject::setValues(int val1, int val2)
{
    value1 = val1;
    value2 = val2;

    notifyObservers();
}

int concreteSubject::getValue1() const
{
    return value1;
}

int concreteSubject::getValue2() const
{
    return value2;
}
