#include "duck.h"
#include "fly_no_way.h"
#include "mallard_duck.h"

int main()
{
	MallardDuck mallard;

	mallard.Display();

	mallard.PerformFly();
	mallard.PerformQuack();

	mallard.set_fly_behavior(std::make_unique<FlyNoWay>());

	mallard.PerformFly();
}
