#pragma once
#include "IVehicle.h"
class Car : public IVehicle
{
public:
	Car();
	void OutTypeVehicleName() override;
	int ReturnSpeedNominal() const override;

private:
	int _speed_nominal_car;
	std::string _type_name;
};

