#pragma once

#include "subject_interface.h"

#include <list>

class WeatherData : public SubjectInterface
{
public:
	WeatherData();

	void MeasurementsChanged();

	void set_measurements(const float temperature, const float humidity, const float pressure);

	void Attach(ObjectInterface* object) override;
	void Detach(ObjectInterface* object) override;
	void Notify() override;

private:
	std::list<ObjectInterface*> observers_;
	float temperature_ = 0;
	float humidity_ = 0;
	float pressure_ = 0;
};
