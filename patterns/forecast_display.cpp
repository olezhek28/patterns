#include "forecast_display.h"

#include <iostream>

ForecastDisplay::ForecastDisplay(SubjectInterface* subject) : weather_data_(subject)
{
	subject->Attach(this);
}

void ForecastDisplay::Update(const float temperature, const float humidity, const float pressure)
{
	last_pressure_ = current_pressure_;
	current_pressure_ = pressure;

	Display();
}

void ForecastDisplay::Display()
{
	std::string str = "Forecast: ";

	if(current_pressure_ > last_pressure_) 
	{
		str += "Improving weather on the way!";
	}
	else if (current_pressure_ == last_pressure_)
	{
		str += "More of the same";
	} 
	else if (current_pressure_ < last_pressure_)
	{
		str += "Watch out for cooler, rainy weather";
	}

	std::cout << str.c_str() << std::endl;
}
