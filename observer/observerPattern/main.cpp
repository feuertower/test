#include <concreteobserver.h>
#include <concretesubject.h>

int main()
{
    concreteSubject sub;
    concreteObserver obs1(1), obs2(2);

    sub.registerObserver(&obs1);
    sub.registerObserver(&obs2);
    sub.setValues(1,2);
    sub.removeObserver(&obs2);
    sub.setValues(3,4);
    sub.registerObserver(&obs2);
    sub.setValues(5,6);


    return 0;
}
