#include "statistics_display.h"

#include <iostream>

StatisticsDisplay::StatisticsDisplay(SubjectInterface* subject) : weather_data_(subject)
{
	subject->Attach(this);
}

void StatisticsDisplay::Update(const float temperature, const float humidity, const float pressure)
{
	temperature_sum_ += temperature;
	++num_readings_;

	if (temperature > max_temperature_)
		max_temperature_ = temperature;

	if (temperature < min_temperature_)
		min_temperature_ = temperature;

	Display();
}

void StatisticsDisplay::Display()
{
	std::cout << "Avg / Max / Min temperature = "
				<< temperature_sum_ / num_readings_ << "F / "
				<< max_temperature_ << "F / "
				<< min_temperature_ << "F" << std::endl;
}
