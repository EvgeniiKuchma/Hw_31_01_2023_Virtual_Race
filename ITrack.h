#pragma once
#include "IVehicle.h"


class ITrack 
{
	public:
		virtual ~ITrack() {}
		virtual void Welcome(IVehicle* van, IVehicle* car) = 0;
		virtual void GoToRace_Winner(IVehicle* van, IVehicle* car) = 0;
		
};

