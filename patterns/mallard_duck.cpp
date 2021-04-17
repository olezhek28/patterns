#include "mallard_duck.h"

#include "fly_with_wings.h"
#include "quack.h"

#include <iostream>

MallardDuck::MallardDuck()
{
	fly_behavior_ = std::make_unique<FlyWithWings>();
	quack_behavior_= std::make_unique<Quack>();
}

void MallardDuck::Display()
{
	std::cout << "I'm a real Mallard duck" << std::endl;
}

