#include <concreteobserver.h>
#include <concretesubject.h>

int main()
{
    concreteObserver obs(1);
    obs.askForValues();

    concreteObserver obs2(2);
    obs2.askForValues();


    return 0;
}
