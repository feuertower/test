#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include <observer.h>
#include <concretesubject.h>
#include <iostream>

class concreteObserver : public Observer
{
public:
    concreteObserver(int id);

    void update() override;
    void askForValues();


private:
    int id;
    concreteSubject *sub;

};

#endif // CONCRETEOBSERVER_H
