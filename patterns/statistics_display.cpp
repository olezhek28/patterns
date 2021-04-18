#include "statistics_display.h"

#include <iostream>

StatisticsDisplay::StatisticsDisplay(SubjectInterface* subject) : weather_data_(subject)
{
	subject->Attach(this);
}

void StatisticsDisplay::Update(const float temperature, const float humidity, const float pressure)
{
	temperature_ = temperature;
	humidity_ = humidity;

	Display();
}

void StatisticsDisplay::Display()
{
	std::cout << "Avg/Max/Min temperature = " << temperature_ << "F degrees and " << humidity_ << "% humidity" << std::endl;
}
