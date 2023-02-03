#pragma once
#include "ITrack.h"
class AshaltTrack : public ITrack
{
public:
	AshaltTrack();
	void Welcome(Van& van, Car& car) override;
	void GoToRace_Winner(Van& van, Car& car) override;
private:
	std::string _name_track;
	double _track_coeff_speed_van;
	double _track_coeff_speed_car;
};



