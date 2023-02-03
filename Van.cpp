#include "Van.h"
Van::Van() : _speed_nominal_van(70), _type_name("Van") {};

void Van::OutTypeVehicleName() {

	std::cout << _type_name;
};
int Van::ReturnSpeedNominal() const {
	return  _speed_nominal_van;
};