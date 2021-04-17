#pragma once

#include "fly_behavior_interface.h"

class FlyWithWings : public FlyBehaviorInterface
{
public:
	void Fly() override;
};
