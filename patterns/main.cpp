#include "duck.h"
#include "fly_no_way.h"
#include "fly_rocket_powered.h"
#include "mallard_duck.h"
#include "model_duck.h"

#include "weather_data.h"
#include "current_conditions_display.h"
#include "forecast_display.h"
#include "statistics_display.h"

int main()
{
	/*MallardDuck mallard;
	mallard.Display();

	mallard.PerformFly();
	mallard.PerformQuack();

	mallard.set_fly_behavior(std::make_unique<FlyNoWay>());

	mallard.PerformFly();

	ModelDuck modelDuck;
	modelDuck.Display();

	modelDuck.PerformFly();
	modelDuck.set_fly_behavior(std::make_unique<FlyRocketPowered>());
	modelDuck.PerformFly();*/

	WeatherData weatherData;
	CurrentConditionsDisplay currentDisplay(&weatherData);
	ForecastDisplay forecastDisplay(&weatherData);
	StatisticsDisplay statisticsDisplay(&weatherData);

	weatherData.set_measurements(80, 65, 30.4f);
	weatherData.set_measurements(20, 65, 30.4f);
}
