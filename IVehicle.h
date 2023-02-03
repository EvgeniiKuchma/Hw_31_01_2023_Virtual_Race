#pragma once
#include <iostream>
#include <string>
#include <windows.h>

class IVehicle
{
public:
	virtual ~IVehicle() {}
	virtual void OutTypeVehicleName() = 0;
	virtual int ReturnSpeedNominal() const = 0;

};

