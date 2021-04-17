#pragma once

#include "quack_behavior_interface.h"

class MuteQuack : public QuackBehaviorInterface
{
public:
	void QuackSound() override;
};