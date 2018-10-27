#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include <observer.h>
#include <iostream>

class concreteObserver : public Observer
{
public:
    concreteObserver(int id);

    void update(int val1, int val2) override;


private:
    int id;
};

#endif // CONCRETEOBSERVER_H
