#include <stdio.h>

class Temperature
{
	double celsius;
	double fahrenheit;
	double kelvin;
public:
	Temperature();
	void set_celsius(double input);
	void set_fahrenheit(double input);
	void set_kelvin(double input);
	double get_fahrenheit();
	double get_kelvin();
	double get_celsius();
};
Temperature::Temperature()
{
	celsius = EOF;
	fahrenheit = EOF;
	kelvin = EOF;
}

void Temperature::set_celsius(double input)
{
	celsius = input;
}
void Temperature::set_fahrenheit(double input)
{
	fahrenheit = input;
}
void Temperature::set_kelvin(double input)
{
	kelvin = input;
}
double Temperature::get_fahrenheit()
{
	if(celsius!=EOF)
	{
		fahrenheit = 32.0 + celsius*1.8;
	}
	else if(kelvin!=EOF)
	{
		fahrenheit = (kelvin - 273.15)*1.80 + 32.0;
	}
	else if(fahrenheit == EOF)
	{
		fahrenheit = 212.0;
	}
	
	if(fahrenheit<=-459.67)
	{
		fahrenheit = -459.67;
	}
	return fahrenheit;
}
double Temperature::get_kelvin()
{
	if(celsius!=EOF)
	{
		kelvin = celsius + 273.15;
	}
	else if(fahrenheit!=EOF)
	{
		kelvin = (fahrenheit - 32.0)/1.80+273.15;
	}
	else if(kelvin == EOF)
	{
		kelvin = 373.15;
	}
	
	if(kelvin <= 0.0)
	{
		kelvin = 0.0;
	}
	return kelvin;
}
double Temperature::get_celsius()
{
	if(kelvin!=EOF)
	{
		if(kelvin<0.0)
		{
			celsius = -273.15;
		}
		else
		{
			celsius = kelvin -273.15;
		}
	}
	else if(fahrenheit!=EOF)
	{
		celsius = (fahrenheit - 32.0)/1.8;
	}
	else if(celsius == EOF)
	{
		celsius = 100;
	}
	
	if(celsius<=-273.15)
	{
		celsius = -273.15;
	}
	return celsius;
}

#include "08C2main.cpp"
