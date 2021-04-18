#pragma once

#include "object_interface.h"

class SubjectInterface
{
public:
	virtual void Attach(ObjectInterface* object) = 0;
	virtual void Detach(ObjectInterface* object) = 0;
	virtual void Notify() = 0;
};
