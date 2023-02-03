#include <iostream>
#include "IVehicle.h"
#include "ITrack.h"
#include "AshaltTrack.h"
#include "CrossroadTrack.h"
#include "Car.h"
#include "Van.h"
int main(){
	IVehicle* car = new Car;
	IVehicle* van = new Van;
	AshaltTrack race;
	CrossroadTrack race1;
	race.Welcome(van,car);
	race.GoToRace_Winner(van, car);
	Sleep(1000);
	race1.Welcome(van, car);
	race1.GoToRace_Winner(van, car);
	delete car;
	delete van;

return 0;
}