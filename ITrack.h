#pragma once
#include "IVehicle.h"
#include "Van.h"
#include "Car.h"

class ITrack 
{
	public:
		virtual ~ITrack() {}
		virtual void Welcome(Van& van, Car& car) = 0;
		virtual void GoToRace_Winner(Van& van, Car& car) = 0;
		
};

