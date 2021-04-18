#pragma once

#include "fly_behavior_interface.h"
#include "quack_behavior_interface.h"

#include <memory>

class Duck
{
public:
	void PerformFly() const;
	void PerformQuack() const;
	void Swim() const;

	void set_fly_behavior(std::unique_ptr<FlyBehaviorInterface> fb);
	void set_quack_behavior(std::unique_ptr<QuackBehaviorInterface> qb);

	virtual void Display() = 0;
	

protected:
	std::unique_ptr<FlyBehaviorInterface> fly_behavior_;
	std::unique_ptr<QuackBehaviorInterface> quack_behavior_;
};
