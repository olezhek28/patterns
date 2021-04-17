#include "duck.h"

#include <iostream>

void Duck::PerformFly() const
{
	fly_behavior_->Fly();
}

void Duck::PerformQuack() const
{
	quack_behavior_->QuackSound();
}

void Duck::Swim() const
{
	std::cout << "All ducks float, even decoys!" << std::endl;
}
