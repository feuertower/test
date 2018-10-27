#include "concreteobserver.h"

concreteObserver::concreteObserver(int id)
{
    this->id=id;
    sub = new concreteSubject();
    sub->registerObserver(this);

    sub->setValues(1,1);
}

void concreteObserver::update()
{
    std::cout<<"-- Client: "<<id<<std::endl;

    std::cout<<"Value1: "<<sub->getValue1()<<std::endl;
    std::cout<<"Value2: "<<sub->getValue2()<<std::endl;
}

void concreteObserver::askForValues()
{
    sub->notifyObservers();
}
