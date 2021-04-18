#include "model_duck.h"

#include "fly_no_way.h"
#include "quack.h"

#include <iostream>

ModelDuck::ModelDuck()
{
	fly_behavior_ = std::make_unique<FlyNoWay>();
	quack_behavior_= std::make_unique<Quack>();
}

void ModelDuck::Display()
{
	std::cout << "I'm a real Model duck" << std::endl;
}
