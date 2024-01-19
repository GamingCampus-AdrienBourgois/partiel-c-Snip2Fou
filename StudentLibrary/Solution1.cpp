#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	if (_from == TemperatureUnits::CELSIUS) {
		if (_to == TemperatureUnits::FAHRENHEIT) {
			return 9.0/5.0 * _value  +32;
		}
		else if (_to == TemperatureUnits::KELVIN) {
			return _value + 273;
		}
	}else if(_from == TemperatureUnits::FAHRENHEIT) {
		if (_to == TemperatureUnits::CELSIUS) {
			return 5.0 / 9.0 *(_value - 32);
		}
		else if (_to == TemperatureUnits::KELVIN) {
			return 5.0 / 9.0 *(_value - 32) + 273;
		}
	}else if (_from == TemperatureUnits::KELVIN) {
		if (_to == TemperatureUnits::CELSIUS) {
			return  _value - 273;
		}
		else if (_to == TemperatureUnits::FAHRENHEIT) {
			return 9.0 / 5.0 *(_value - 273) + 32;
		}
	}
}

#endif
