#pragma once

#include "object_interface.h"
#include "subject_interface.h"
#include "display_interface.h"

class HeatIndexDisplay : public ObjectInterface, public DisplayInterface
{
public:
	explicit HeatIndexDisplay(SubjectInterface* subject);

	void Update(const float temperature, const float humidity, const float pressure) override;
	void Display() override;

private:
	float ComputeHeatIndex(const float temperature, const float humidity);

	SubjectInterface* weather_data_;
	float heat_index_ = 0.0f;
};