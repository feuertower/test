#include "concreteobserver.h"

concreteObserver::concreteObserver(int id)
{
    this->id=id;
}

void concreteObserver::update(int val1, int val2)
{
    std::cout<<"-- Client: "<<id<<std::endl;
    std::cout<<"Value1: "<<val1<<std::endl;
    std::cout<<"Value2: "<<val2<<std::endl;
}
