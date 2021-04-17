#pragma once

#include "quack_behavior_interface.h"

class Squeak : public QuackBehaviorInterface
{
public:
	void QuackSound() override;
};