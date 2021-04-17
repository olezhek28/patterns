#include "duck.h"
#include "mallard_duck.h"

int main()
{
	MallardDuck mallard;

	mallard.Display();
	
	mallard.PerformQuack();
	mallard.PerformFly();
}
