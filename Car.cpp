#include "Car.h"

Car::Car() : _speed_nominal_car(70) ,_type_name("Car") {};

void Car::OutTypeVehicleName() {
	
	std::cout << _type_name;
};
int Car::ReturnSpeedNominal() const {
	return  _speed_nominal_car;
};
