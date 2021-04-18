#include "forecast_display.h"

#include <iostream>

ForecastDisplay::ForecastDisplay(SubjectInterface* subject) : weather_data_(subject)
{
	subject->Attach(this);
}

void ForecastDisplay::Update(const float temperature, const float humidity, const float pressure)
{
	temperature_ = temperature;
	humidity_ = humidity;

	Display();
}

void ForecastDisplay::Display()
{
	std::cout << "Forecast: " << temperature_ << "F degrees and " << humidity_ << "% humidity" << std::endl;
}
