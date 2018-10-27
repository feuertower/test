#ifndef OBSERVER_H
#define OBSERVER_H


class Observer
{
public:
    Observer();
    virtual void update(int value1, int value2) = 0;
};

#endif // OBSERVER_H
