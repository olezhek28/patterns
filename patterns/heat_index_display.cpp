#include "heat_index_display.h"

#include <iostream>

HeatIndexDisplay::HeatIndexDisplay(SubjectInterface* subject) : weather_data_(subject)
{
	subject->Attach(this);
}

void HeatIndexDisplay::Update(const float temperature, const float humidity, const float pressure)
{
	heat_index_ = ComputeHeatIndex(temperature, humidity);

	Display();
}

void HeatIndexDisplay::Display()
{
	std::cout << "Heat index is " << heat_index_ << std::endl;
}

float HeatIndexDisplay::ComputeHeatIndex(const float temperature, const float humidity)
{
	auto heatIndex = static_cast<float>((16.923 + (0.185212 * temperature) +
						(5.37941 * humidity) - (0.100254 * temperature * humidity) +
						(0.00941695 * (temperature * temperature)) +
						(0.00728898 * (humidity * humidity)) +
						(0.000345372 * (temperature * temperature * humidity)) -
						(0.000814971 * (temperature * humidity * humidity)) +
						(0.0000102102 * (temperature * temperature * humidity * humidity)) -
						(0.000038646 * (temperature * temperature * temperature)) +
						(0.0000291583 * (humidity * humidity * humidity)) +
						(0.00000142721 * (temperature * temperature * temperature * humidity)) +
						(0.000000197483 * (temperature * humidity * humidity * humidity)) -
						(0.0000000218429 * (temperature * temperature * temperature * humidity * humidity)) +
						0.000000000843296 * (temperature * temperature * humidity * humidity * humidity)) -
						(0.0000000000481975 * (temperature * temperature * temperature * humidity * humidity * humidity)));

	return heatIndex;
}
