#include <concreteobserver.h>
#include <concretesubject.h>

int main()
{
    concreteObserver obs(1);
    obs.askForValues();

    concreteObserver feature_123(2);
    feature_123.askForValues();


    return 0;
}
