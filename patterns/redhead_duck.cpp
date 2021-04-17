#include "redhead_duck.h"


#include "fly_with_wings.h"
#include "quack.h"

#include <iostream>

RedheadDuck::RedheadDuck()
{
	fly_behavior_ = std::make_unique<FlyWithWings>();
	quack_behavior_= std::make_unique<Quack>();
}

void RedheadDuck::Display()
{
	std::cout << "I'm a real Redhead duck" << std::endl;
}
