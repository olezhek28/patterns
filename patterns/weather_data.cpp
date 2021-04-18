#include "weather_data.h"

WeatherData::WeatherData()
{
	
}

void WeatherData::MeasurementsChanged()
{
	Notify();
}

void WeatherData::set_measurements(const float temperature, const float humidity, const float pressure)
{
	temperature_ = temperature;
	humidity_ = humidity;
	pressure_ = pressure;

	MeasurementsChanged();
}

void WeatherData::Attach(ObjectInterface* object)
{
	observers_.push_back(object);
}

void WeatherData::Detach(ObjectInterface* object)
{
	observers_.remove(object);
}

void WeatherData::Notify()
{
	for (auto* observer : observers_)
	{
		observer->Update(temperature_, humidity_, pressure_);
	}
}
