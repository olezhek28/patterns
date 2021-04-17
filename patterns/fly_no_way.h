#pragma once

#include "fly_behavior_interface.h"

class FlyNoWay : public FlyBehaviorInterface
{
public:
	void Fly() override;
};