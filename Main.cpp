#include <iostream>
#include "IVehicle.h"
#include "ITrack.h"
#include "AshaltTrack.h"
#include "CrossroadTrack.h"
int main(){
	Van van;
	Car car;
	AshaltTrack race;
	CrossroadTrack race1;
	race.Welcome(van,car);
	race.GoToRace_Winner(van, car);
	Sleep(1000);
	race1.Welcome(van, car);
	race1.GoToRace_Winner(van, car);



return 0;
}