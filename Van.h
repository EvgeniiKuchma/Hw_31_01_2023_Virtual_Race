#pragma once
#include "IVehicle.h"
class Van : public IVehicle
{
public:
	Van();
	void OutTypeVehicleName() override;
	int ReturnSpeedNominal() const override;
private:
	int _speed_nominal_van;
	std::string _type_name;
};

