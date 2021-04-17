#include "rubber_duck.h"

#include "fly_no_way.h"
#include "squeak.h"

#include <iostream>

RubberDuck::RubberDuck()
{
	fly_behavior_ = std::make_unique<FlyNoWay>();
	quack_behavior_= std::make_unique<Squeak>();
}

void RubberDuck::Display()
{
	std::cout << "I'm a real Rubber duck" << std::endl;
}
