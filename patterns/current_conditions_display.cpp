#include "current_conditions_display.h"

#include <iostream>

CurrentConditionsDisplay::CurrentConditionsDisplay(SubjectInterface* subject) : weather_data_(subject)
{
	subject->Attach(this);
}

void CurrentConditionsDisplay::Update(const float temperature, const float humidity, const float pressure)
{
	temperature_ = temperature;
	humidity_ = humidity;

	Display();
}

void CurrentConditionsDisplay::Display()
{
	std::cout << "Current conditions: " << temperature_ << "F degrees and " << humidity_ << "% humidity" << std::endl;
}
