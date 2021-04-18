#pragma once

#include "fly_behavior_interface.h"

class FlyRocketPowered : public FlyBehaviorInterface
{
public:
	void Fly() override;
};
