/* Includes to include */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Function Declarations*/

float hex_to_vel(int hex);
float hex_to_dec(int hex);
float hex_to_angle(int hex);


/*Definitions*/
#define MaxVelValue  40.0F
#define MaxVelInHex 28
#define MaxAngValue  360.0F
#define MaxAngInHex 168.0F

/*Function to convert Bits to velocity in km/hr */
float hex_to_vel(int hex)
{
	float Vel = 0.0F;

	if (hex >= MaxVelInHex)
	{
		Vel = MaxVelValue;
	}
	else if (hex < 0.0F)
	{
		Vel = 0.0F;
	}
	else
	{
		Vel = hex_to_dec(hex);
	}

	return Vel;
}

float hex_to_angle(int hex) 
{
	float Angle = 0.0F;
	Angle = hex_to_dec(hex);
	
	if (Angle >= MaxAngValue)
	{
		Angle = MaxAngValue;
	}
	else if (Angle <= 0.0F)
	{
		Angle = 0.0F;
	}


	return Angle;

}

float hex_to_dec (int hex)
{
	float decimal = 0.0F;
	decimal = hex;
	//decimal = (float)(hex);
	return decimal;
}

