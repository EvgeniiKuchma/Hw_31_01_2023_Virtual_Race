#include "CrossroadTrack.h"

CrossroadTrack::CrossroadTrack() : _name_track("CrossroadTrack"), _track_coeff_speed_van(0.5), 
 _track_coeff_speed_car(0.7) {};

void CrossroadTrack::Welcome(IVehicle* van, IVehicle* car) {
	std::cout << "\n\nWelcome the our RACE!!!!" << std::endl;
	std::cout << "You track is --->>> " << _name_track << std::endl;
	std::cout << "Today on the track: "; 
	van->OutTypeVehicleName(); std::cout << " and "; car->OutTypeVehicleName();
	std::cout << std::endl;
};

void CrossroadTrack::GoToRace_Winner(IVehicle* van, IVehicle* car) {
	std::cout << "READY <<<< STEADY <<<< GOOOO!!!!" << std::endl;
	for (int i = 0; i < 6; i++) {
		std::cout << "======";
		Sleep(500);
	}
	if ((car->ReturnSpeedNominal() * _track_coeff_speed_car) >
		(van->ReturnSpeedNominal() * _track_coeff_speed_van)) {
		std::cout << "Winner--Winner--Chicken--Dinner >>>> "; car->OutTypeVehicleName();

	}
	else 
	{
		std::cout << "Winner--Winner--Chicken--Dinner >>>> "; van->OutTypeVehicleName();
		std::cout << std::endl;
	};
};