#pragma once
#include <iostream>
#include <windows.h>

class IVehicle
{
public:
	virtual ~IVehicle() {}
	virtual void OutTypeVehicleName() = 0;
	virtual int ReturnSpeedNominal() const = 0;

};

