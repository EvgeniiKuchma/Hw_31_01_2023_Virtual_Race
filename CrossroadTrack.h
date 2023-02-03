#pragma once
#include "ITrack.h"
class CrossroadTrack : public ITrack
{
public: 
	CrossroadTrack();
	void Welcome(IVehicle* van, IVehicle* car) override;
	void GoToRace_Winner(IVehicle* van, IVehicle* car) override;
private:
	std::string _name_track;
	double _track_coeff_speed_van;
	double _track_coeff_speed_car;

};


