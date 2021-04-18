#pragma once

class ObjectInterface
{
public:
	virtual void Update(const float temperature, const float humidity, const float pressure) = 0;
};
