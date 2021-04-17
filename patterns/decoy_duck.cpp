#include "decoy_duck.h"

#include "fly_no_way.h"
#include "mute_quack.h"

#include <iostream>

DecoyDuck::DecoyDuck()
{
	fly_behavior_ = std::make_unique<FlyNoWay>();
	quack_behavior_= std::make_unique<MuteQuack>();
}

void DecoyDuck::Display()
{
	std::cout << "I'm a real Decoy duck" << std::endl;
}
