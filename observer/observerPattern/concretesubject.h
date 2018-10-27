#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include <subject.h>
#include <vector>
#include <algorithm>

class concreteSubject : public Subject
{
public:
    concreteSubject();
    void registerObserver(Observer *o) override;
    void removeObserver(Observer *o) override;
    void notifyObservers() override;

    void setValues(int val1, int val2);

    int getValue1() const;
    int getValue2() const;

private:
    std::vector<Observer*> obsList;

    int value1;
    int value2;
};

#endif // CONCRETESUBJECT_H
