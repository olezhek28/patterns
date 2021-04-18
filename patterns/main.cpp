#include "duck.h"
#include "fly_no_way.h"
#include "fly_rocket_powered.h"
#include "mallard_duck.h"
#include "model_duck.h"

int main()
{
	MallardDuck mallard;
	mallard.Display();

	mallard.PerformFly();
	mallard.PerformQuack();

	mallard.set_fly_behavior(std::make_unique<FlyNoWay>());

	mallard.PerformFly();

	ModelDuck modelDuck;
	modelDuck.Display();

	modelDuck.PerformFly();
	modelDuck.set_fly_behavior(std::make_unique<FlyRocketPowered>());
	modelDuck.PerformFly();
}
