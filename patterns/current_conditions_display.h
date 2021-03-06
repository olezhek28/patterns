#pragma once

#include "object_interface.h"
#include "subject_interface.h"
#include "display_interface.h"

class CurrentConditionsDisplay : public ObjectInterface, public DisplayInterface
{
public:
	explicit CurrentConditionsDisplay(SubjectInterface* subject);

	void Update(const float temperature, const float humidity, const float pressure) override;
	void Display() override;

private:
	SubjectInterface* weather_data_;
	float temperature_ = 0;
	float humidity_ = 0;
};
