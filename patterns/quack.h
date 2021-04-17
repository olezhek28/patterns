#pragma once

#include "quack_behavior_interface.h"

class Quack : public QuackBehaviorInterface
{
public:
	void QuackSound() override;
};