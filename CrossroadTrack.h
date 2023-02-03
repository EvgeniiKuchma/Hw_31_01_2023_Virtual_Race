#pragma once
#include "ITrack.h"
class CrossroadTrack : public ITrack
{
public: 
	CrossroadTrack();
	void Welcome(Van& van, Car& car) override;
	void GoToRace_Winner(Van& van, Car& car) override;
private:
	std::string _name_track;
	double _track_coeff_speed_van;
	double _track_coeff_speed_car;

};


