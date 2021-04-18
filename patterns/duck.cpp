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

void Duck::set_fly_behavior(std::unique_ptr<FlyBehaviorInterface> fb)
{
	fly_behavior_ = std::move(fb);
}

void Duck::set_quack_behavior(std::unique_ptr<QuackBehaviorInterface> qb)
{
	quack_behavior_ = std::move(qb);
}
